#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "Strategy.h"
#include <stdio.h>

// 上下文类
class Context
{
public:
	Context(){
		arr = nullptr;
		N = 0;
		sortStrategy = nullptr;
	}
	Context(int iArr[], int iN){
		this->arr = iArr;
		this->N = iN;
		sortStrategy = nullptr;
	}
	Context(const Context& context) = delete;
	Context& operator=(const Context&) = delete;
	~Context()
	{
		if(sortStrategy)
		{
			delete sortStrategy;
			sortStrategy = nullptr;
		}
	}
	void setSortStrategy(Strategy* iSortStrategy){
		if(sortStrategy)
		{
			delete sortStrategy;
			sortStrategy = nullptr;
		}
		this->sortStrategy = iSortStrategy;
	}
	void sort(){
		this->sortStrategy->sort(arr, N);
		printf("输出： ");
		this->print();
	}
	void setInput(int iArr[], int iN){
		this->arr = iArr;
		this->N = iN;
	}
	void print(){
		for (int i = 0; i < N; i++){
			printf("%3d ", arr[i]);
		}
		printf("\n");
	}

private:
	Strategy* sortStrategy;
	int* arr;
	int N;
};

#endif // __CONTEXT_H__