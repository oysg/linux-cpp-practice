#include <iostream>
#include "CompositePattern.h"

int main()
{
	Component *head, *sichuanBranch, *cdBranch, *myBranch, *office1, *office2, *office3,
		*office4, *office5, *office6, *office7, *office8;

	head = new SubComponent("总部");
	sichuanBranch = new SubComponent("四川分部");
	office1 = new AdminOffice("行政办公室");
	office2 = new DeanOffice("教务办公室");
	

	cdBranch = new SubComponent("成都分部");
	myBranch = new SubComponent("绵阳分部");
	office3 = new AdminOffice("行政办公室");
	office4 = new DeanOffice("教务办公室");
	

	office5 = new AdminOffice("行政办公室");
	office6 = new DeanOffice("教务办公室");
	
	office7 = new AdminOffice("行政办公室");
	office8 = new DeanOffice("教务办公室");
	
	cdBranch->add(office5);
	cdBranch->add(office6);

	myBranch->add(office7);
	myBranch->add(office8);

	sichuanBranch->add(office3);
	sichuanBranch->add(office4);
	sichuanBranch->add(cdBranch);
	sichuanBranch->add(myBranch);

	head->add(office1);
	head->add(office2);
	head->add(sichuanBranch);
	
	head->operation();

	system("pause");

	delete head;
	delete sichuanBranch;
	delete cdBranch;
	delete myBranch;
	delete office1;
	delete office2;
	delete office3;
	delete office4;
	delete office5;
	delete office6;
	delete office7;
	delete office8;

	head = nullptr;
	sichuanBranch = nullptr;
	cdBranch = nullptr;
	myBranch = nullptr;
	office1 = nullptr;
	office2 = nullptr;
	office3 = nullptr;
	office4 = nullptr;
	office5 = nullptr;
	office6 = nullptr;
	office7 = nullptr;
	office8 = nullptr;

	return 0;
}