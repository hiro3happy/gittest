// Bingo.cpp : メイン プロジェクト ファイルです。

#include "stdafx.h"
#include "FormBingo.h"
#include "stdio.h"

using namespace Bingo;
int mTimerInterval = 1000;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// コントロールが作成される前に、Windows XP ビジュアル効果を有効にします
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// メイン ウィンドウを作成して、実行します
	Application::Run(gcnew FormBingo());
	return 0;
}

