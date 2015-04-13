// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the STACK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// STACK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STACK2_EXPORTS
#define STACK2_API __declspec(dllexport)
#else
#define STACK2_API __declspec(dllimport)
#endif

// This class is exported from the Stack.dll
class STACK2_API CStack {

private:
	typedef struct node
	{
		int data;
		node *pre;
	}Node;

	Node *n;
	Node *t;
	Node *h;
	int currentnode, peekval, size, sizecount;

public:
	CStack();
	CStack(int);
	bool push(int);
	bool pop();
	bool peek();
	bool isFull();
	bool isEmpty();
	// TODO: add your methods here.
};

extern STACK2_API int nStack;

STACK2_API int fnStack(void);
