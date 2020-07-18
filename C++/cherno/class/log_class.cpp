#include <iostream>
class Log
{
public:
	const int loglevelerror=0;
	const int loglevelwarning=1;
	const int loglevelinfo=2;
	
private:
	int m_loglevel=loglevelinfo;
public:
	void setlevel(int level)
	{
		m_loglevel=level;
		
		}
	void error(const char* message)
	{
		if(m_loglevel>=loglevelerror)
		{
		std::cout<<"[ERROR]:"<<message<<std::endl;
		}
	}
		void warn(const char* message)
	{
		if(m_loglevel>=loglevelwarning)
		{
		std::cout<<"[WARNING]:"<<message<<std::endl;
		}
	}
		void info(const char* message)
	{
		if(m_loglevel>=loglevelinfo)
		{
		std::cout<<"[INFO]:"<<message<<std::endl;
		}
	}
	
};

int main()
{
	Log log;
	log.setlevel(log.loglevelwarning);
	log.warn("hello!");
	log.error("hello!");
	log.info("hello!");
	std::cin.get();
	
	
	return 0;
}
