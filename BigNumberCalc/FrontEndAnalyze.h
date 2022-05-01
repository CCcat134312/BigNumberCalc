#pragma once
#include "BigNumber.h"

// �P�_��J���B�⦡�O�_�X�k
bool inputIsValid(std::string);

// �P�_�B��Ÿ����u������
int priority(std::string alpha);

// ��ƭȹB�⦡��X����
BigNumber convert(std::string);

// �P�_��J���r��O�_��BigNumber���榡
bool isBigNumber(std::string);

// �p���ƩM�@�ӹB��Ÿ�
BigNumber Caculate(const BigNumber&, const BigNumber&, std::string symbol);