/*
  Receive
     Receive_Fruit
	 Receive_Chicken

  Command (Receive)
     Execute

  Wait  (Command*)
      Set_Command()
      Excute()

   每个命令都有一个专门的接受者，例如专门有一个人接受准备水果的命令
                                     有一个人接受 鸡肉的命令
   每一个服务员发出命令的时候 需要选择哪一个命令，从而进行发送

*/

#include <stdio.h>
#include "Waiter.h"
#include "Receive_Fruit.h"
#include "Receive_Cheicken.h"
int main()
{
	Receive* receive_Fruit = new Receive_Fruit();
	Receive* receive_Cheicken = new Receive_Cheicken();
	Command* command_Fruit = new Command(receive_Fruit);
	Command* command_cheichen = new Command(receive_Cheicken);

	Waiter* wait = new Waiter();

	wait->Set_Command(command_cheichen);
	wait->Excuse();
	wait->Set_Command(command_Fruit);
	wait->Excuse();

	getchar();
	return 0;
}
