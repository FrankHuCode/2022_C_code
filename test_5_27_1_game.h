#pragma once
//������Ϸ��ص�ͷ�ļ�����,�������������Ŷ���

//ͷ�ļ��İ���

#include<stdio.h>//.c�ļ��������Լ�������ͷ�ļ�
#include<stdlib.h>
#include<time.h>

//���ŵĶ���

#define ROW 3
#define COL 3

//����������

//��ʼ�����̺���������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ������ʾ����������
void DisplayBoard(char board[ROW][COL],int row,int col);

//������庯��������
void PlayerMove(char board[ROW][COL], int row, int col);

//�������庯��������
void ComputerMove(char board[ROW][COL], int row, int col);

//Լ��
//���Ӯ��--*
//����Ӯ��--#
//��Ϸƽ��--E
//��Ϸ����--C

//�ж�����������������
char IsWin(char board[ROW][COL], int row, int col);