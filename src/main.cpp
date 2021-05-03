//
// Created by initard on 03/05/2021.
//
#include <iostream>
#include <Eigen/Dense>
#include "../models/read_wav_file/readWavFile.h"


using Eigen::VectorXd;


int main(){

    char *name = "../data/test_file_1.wav";
    readWavFile WavFileReader(name);
    VectorXd vector = WavFileReader.getData();

    std::cout << "hello bird!" << std::endl;
    std::cout << vector << std::endl;
}