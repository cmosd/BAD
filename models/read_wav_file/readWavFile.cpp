//
// Created by initard on 03/05/2021.
//

#include "readWavFile.h"

readWavFile::readWavFile(char *fileName): data(1) , fileName(fileName){

    FILE* wavFile = fopen(fileName, "r");
    //Read the header
    int headerSize = sizeof(wav_hdr), filelength = 0;
    size_t bytesRead = fread(&wavHeader, 1, headerSize, wavFile);

    VectorXd m((int)wavHeader.Subchunk2Size / 2);

    for (int i=0; i<(int)wavHeader.Subchunk2Size / 2; i++){
        auto* data = new short[1];
        bytesRead = fread(data, sizeof(short), 1, wavFile);
        m[i] = *data;
    }

    data = m;
}

VectorXd readWavFile::getData() {
    return data;
}