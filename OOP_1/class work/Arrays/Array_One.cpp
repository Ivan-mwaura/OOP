#include<iostream>
int main()
{
	int i, mark[10];

	for (i = 0;i < 10;i++)
	{
		std::cout<<"Enter the mark for student "<<(i + 1)<<":> ";
		std::cin>>mark[i];
	}

	std::cout<<"\nThe marks you entered were:\n\n";
	for(i = 0;i < 10;i++)
		std::cout<<mark[i]<<" ";

	std::cout<<"\n\n";
	return 0;
}
