﻿// 演習10.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int nen =0, tuki =0;
    printf("nen tuki = ");
    scanf_s("%d\n",&nen); 
    scanf_s("%d\n", &tuki);
    printf("%d,%d", nen, tuki);
    if (tuki ==2) {
        if (nen % 4 == 0) {
            if (nen % 100 == 0 && !(nen % 400 == 0)) {
                printf("28日\n");
            }
            else {
                printf("29日\n");
            }
        }
        else {
            printf("28日\n");
        }
    }
    else if (tuki == 4 || tuki==6 || tuki==9){
        printf("30日\n");
    }
    else if(tuki==1 || tuki==3 || tuki==5 || tuki==7 || tuki==8 || tuki==12){
        printf("31日\n");
    }
    else{
        printf("error\n");
    }
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
