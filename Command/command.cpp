/**
 * ÃüÁîÄ£Ê½
 */
#include <iostream>
using namespace std;

class Receiver {
public:
	virtual void action() = 0;
};

class MyReceiver : public Receiver {
public:
	virtual void action() {
		cout << "Act" <<endl;
	}
};

class Command {
public:
	virtual void excute() = 0;
};

class ConcreteCommand : public Command {
public:
	virtual void excute() {
		receiver->action();
	}
	ConcreteCommand(Receiver *recv) {
		this->receiver = recv;
	}
private:
	Receiver *receiver;
};

class Invoker {
private:
	Command *cmd;
public:
	void setCommand(Command *cmd) {
		this->cmd = cmd;
	}
	void run () {
		cmd->excute();
	}
};

/**
 * main×öclient
 */
int main() {
	Command *cmd = new ConcreteCommand(new MyReceiver());
	Invoker *invoker = new Invoker();
	invoker->setCommand(cmd);
	invoker->run();
	return 0;
}
