#pragma once
#include "BigNumber.h"

// �P�_��J���B�⦡�O�_�X�k
// Judge input equation is legel.
bool inputIsValid(std::string);

// Check the char is Symbol of operation or not
bool isSymbol(char);

// ��r��榡�ơA�קK+��-�@�������p Ex. 1+++++1 => 1 + 1
// To format string, avoid situation which + or - is sign not addition or subtraction.
std::string format(std::string);

// replace any op to " op "
std::string replace(std::string);

// �P�_�B��Ÿ����u������
// Judge the priority of symbol of operation.
int priority(std::string alpha);

// ��ƭȹB�⦡��X����
// Calculate the input equation.
BigNumber convert(std::string);

// �P�_��J���r��O�_��BigNumber���榡
// Judge the input string is meets BigNumber format or not.
bool isBigNumber(std::string);

// �p���ƩM�@�ӹB��Ÿ�
// Calculate two number and one symbol of operation.
BigNumber Calculate(const BigNumber&, const BigNumber&, std::string symbol);