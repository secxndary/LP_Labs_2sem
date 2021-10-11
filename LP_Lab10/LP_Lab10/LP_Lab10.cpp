#include "stdafx.h"

int wmain(int argc, wchar_t* argv[])
{
	setlocale(LC_ALL, "Russian");

	cout << "\n============================== Тест Error::geterror() ==============================\n\n";
	try
	{
		throw ERROR_THROW(100);
	}
	catch (Error::ERROR e)
	{
		cout << "\t\t     Ошибка " << e.id << ": " << e.message << "\n\n";
	}

	cout << "============================= Тест Error::geterrorin() =============================\n\n";
	try
	{
		throw ERROR_THROW_IN(111, 7, 7);
	}
	catch (Error::ERROR e)
	{
		cout << "     Ошибка " << e.id << ": " << e.message << ", строка " << e.inext.line << ", позиция " << e.inext.col << "\n\n";
	}
		
	cout << "=============================== Тест Parm::getparm() ===============================\n\n";
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		wcout << "         -in:" << parm.in << ", -out:" << parm.out << ", -log: " << parm.log << "\n\n";
	}
	catch (Error::ERROR e)
	{
		cout << "Ошибка " << e.id << ": " << e.message << "\n\n";
	}
	
	cout << "================================= Тест In::getin() =================================\n\n";
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		cout << "\t\t     " << in.text << '\n';
		cout << "\t\t\t\t Всего символов: " << in.size << '\n';
		cout << "\t\t\t\t   Всего строк: " << in.lines << '\n';
		cout << "\t\t\t\t    Пропущено: " << in.ignor << '\n';
	}
	catch (Error::ERROR e)
	{
		cout << "Ошибка " << e.id << ": " << e.message << '\n';
		cout << "строка " << e.inext.line << ", позиция " << e.inext.col << "\n\n";
	}
	cout << "\n====================================================================================\n\n";

	Log::LOG log = Log::INITLOG;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::WriteLine(log, "Тест: ", "без ошибок ", "");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);
		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
	}
}