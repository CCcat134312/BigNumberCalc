#pragma once
#include "BigNumber.h"

// �P�_��J���B�⦡�O�_�X�k
bool inputIsValid(std::string);

// check the char is Symbol of operation or not
bool isSymbol(char);

// ��r��榡�ơA�קK+��-�@�������p Ex. 1+++++1 => 1 + 1
std::string format(std::string);

// replace any op to " op "
std::string replace(std::string);

// �P�_�B��Ÿ����u������
int priority(std::string alpha);

// ��ƭȹB�⦡��X����
BigNumber convert(std::string);

// �P�_��J���r��O�_��BigNumber���榡
bool isBigNumber(std::string);

// �p���ƩM�@�ӹB��Ÿ�
BigNumber Caculate(const BigNumber&, const BigNumber&, std::string symbol);