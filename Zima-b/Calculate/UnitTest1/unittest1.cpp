#include "stdafx.h"
#include "CppUnitTest.h"
#include "H:/学习/学习/2019秋季/软件工程/个人项目/Calculator/Zima-b/Calculate/Calculate/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+22");
			Assert::AreEqual(ret, (string)"11+22=33");
		}

	};
}