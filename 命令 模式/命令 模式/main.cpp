/*
  Receive
     Receive_Fruit
	 Receive_Chicken

  Command (Receive)
     Execute

  Wait  (Command*)
      Set_Command()
      Excute()

   ÿ�������һ��ר�ŵĽ����ߣ�����ר����һ���˽���׼��ˮ��������
                                     ��һ���˽��� ���������
   ÿһ������Ա���������ʱ�� ��Ҫѡ����һ������Ӷ����з���

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
