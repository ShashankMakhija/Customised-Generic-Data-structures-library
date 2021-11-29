#include<iostream>

using namespace std;

// Structure for singly LL , Stack , Queue
template <typename T>
struct node
{
    T data;
    struct node * Next;
  
};

// Structure for Doubly LL
template <typename T>
struct d_node 
{
	T data;
	struct d_node * Next;
	struct d_node * Prev;

};

// structure for tree
template <typename T>
struct node_t 
{
	int data;
	struct node_t *Right;
	struct node_t *Left;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	'using' alias declaration , is compatible with templates , unlike traditional typedef
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
using PNODE = struct node<T> *;

template <typename T>
using NODE = struct node<T>;



template <typename T>
using d_PNODE = struct d_node<T> *;

template <typename T>
using d_NODE = struct d_node<T>;



template <typename T>
using NODE_t = struct node_t<T>;

template <typename T>
using PNODE_t = struct node_t<T> *;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 						Singly Linear Linked List
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : Singly_Linear_LL
//	Description: Linear Singly Linked list Data structure
//  Operations : Insert at begning ; Insert At End ; Insert at any given position
//               Delete at begning ; Delete At end ; Delete at any given position
//				 Display all the elements ; return count of all the elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class Singly_Linear_LL
{
private:
	
	struct node<T> * pFirst; 
	int size;

public:	
	
	 Singly_Linear_LL();
	~Singly_Linear_LL();
	
	void Insert_Front( T );
	void Insert_End( T );
	void Insert_At_X_Pos ( T , int );
	
	void Display_LL();
	int Count();
	
	void Delete_Front();
	void Delete_End();
	void Delete_At_X_Pos ( int );
	
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 						SINGLY CIRCULAR Linked List
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : Singly_Circular_LL
//	Description: Circular Singly Linked List
//  Operations : Insert at begning ; Insert At End ; Insert at any given position
//               Delete at begning ; Delete At end ; Delete at any given position
//				 Display all the elements ; return count of all the elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T>
class Singly_Circular_LL 
{
private:
	
	struct node<T> *pFirst;
	struct node<T> *pLast;
	int size;
	
public:
	
	Singly_Circular_LL();
	~Singly_Circular_LL();
	void Insert_Front ( T );
	void Insert_End ( T );
	void Insert_At_X_Pos ( T , int );
	
	void Delete_Front();
	void Delete_End();
	void Delete_At_X_Pos ( int );
	
	int Count();
	void Display_LL();
	
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 						Doubly Linear Linked List
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : Doubly_Linear_LL
//	Description: Doubly Linear Linked List
//  Operations : Insert at begning ; Insert At End ; Insert at any given position
//               Delete at begning ; Delete At end ; Delete at any given position
//				 Display all the elements ; return count of all the elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



template <typename T>
class Doubly_Linear_LL
{
private:

	struct d_node<T> * pFirst;
	int size;

public:

	Doubly_Linear_LL();
	~Doubly_Linear_LL();
	void Insert_Front( T );
	void Insert_End( T );
	void Insert_At_X_Pos( T , int );
	
	void Delete_Front();
	void Delete_End();
	void Delete_At_X_Pos( int );

	void Display_LL();
	int Count();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 						Doubly Circular Linked List
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : Doubly_Linear_LL
//	Description: Doubly Linear Linked List
//  Operations : Insert at begning ; Insert At End ; Insert at any given position
//               Delete at begning ; Delete At end ; Delete at any given position
//				 Display all the elements ; return count of all the elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class Doubly_Circular_LL
{
private:
	
	struct d_node<T> * pFirst;
	struct d_node<T> * pLast;
	int size;

public:
	
	Doubly_Circular_LL();
	~Doubly_Circular_LL();
	
	void Insert_Front ( T );
	void Insert_End ( T );
	void Insert_At_X_Pos ( T , int );
	
	void Delete_Front();
	void Delete_End ();
	void Delete_At_X_Pos( int );
	
	void Display_LL();
	int Count();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 							Stack
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : StackX
//	Description: Stack data structure 
//  Operations : push element into the stack; 
//				 pop elemet from the stack;
//				 Display all the elements of the stack
//				 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T>
class StackX
{
private:
	
	struct node<T> * pFirst;
	int size;

public:
	
	StackX();
	~StackX();

	void push( T );
	int pop();
	
	void Display_Stack();
	int Count();
	 
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 							Queue
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : QueueX
//	Description: Stack data structure 
//  Operations : enqueue ; Insert element into the Queue; 
//				 dequeue ; remove element from the queue;
//				 Display all the elements of the Queue
//				 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
class QueueX    
{
private:

    PNODE<T> pFirst;
    int size;
    
public:

    QueueX();
    ~QueueX();
   
    void enqueue(T);
    int dequeue();
	
	void Display_Queue();
	int Count();
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 							Binary Search Tree
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Class Name : BST_X
//	Description: Binary Search Tree
//  Operations : Insert into the tree ; 
//				 Search the element in the tree;
//               Return the count of elements in the tree;
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
class BST_X
{
private:
	
	int size;
	struct node_t<T> *pFirst;

public:
	
		BST_X();
		
		void Insert(T);
		bool Search(T);
		
		int Count();
		
	
};



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Singly_Linear_LL methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Singly_Linear_LL
// Description : Contructor for class Singly_Linear_LL to initialize all the characteristics of the class
// INPUT : NODE 
//
// variable desc: pFirst = pointer First ; pointing to first node of the linked list
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Singly_Linear_LL<T> :: Singly_Linear_LL()
{
	pFirst = NULL;
	size = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : ~Singly_Linear_LL
// Description : Destructor for class Singly_Linear_LL to deallocate the allocated resources in the LL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Singly_Linear_LL<T> :: ~Singly_Linear_LL()
{
	PNODE<T> navigate = pFirst , temp = NULL;
	while ( navigate != NULL )
	{
		temp = navigate;
		navigate = navigate -> Next ;
		delete temp;
		temp = NULL;
	}
	pFirst = NULL;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_Front
// Description : function to insert element at first position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Singly_Linear_LL<T> :: Insert_Front( T n_Data )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> data = n_Data;
	n_Node -> Next = NULL;
	
	if ( size == 0 )
	{
		pFirst = n_Node; 
	} 
	else
	{
		n_Node -> Next = pFirst;
		pFirst = n_Node;
	}
	size++;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_End
// Description : function to insert element at Last position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Singly_Linear_LL<T> :: Insert_End ( T n_Data )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if ( pFirst == NULL )
	{
		pFirst = n_Node;
	}
	else
	{
		PNODE<T> temp = pFirst;
		while ( temp -> Next != NULL )
		{
			temp = temp -> Next;
		}
		
		temp -> Next = n_Node;
	}
	size++;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_At_X_Pos
// Description : function to insert element at 'X' position of the linked list , 
//               where is 'X' is defiened by the user.
// INPUT : generic data , INT
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//				  pos = position
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Singly_Linear_LL<T> :: Insert_At_X_Pos ( T n_Data , int pos )
{
	// Filter
	if ( pos < 1 || pos > (size+1)  )
	{
		return;
	}	
	
	if ( pos == 1 )
	{
		Insert_Front(n_Data);
	}
	else if ( pos == (size+1) )
	{
		Insert_End(n_Data);
	}
	else
	{
		PNODE<T> n_Node = new NODE<T>;
		n_Node -> Next = NULL;
		n_Node -> data = n_Data;
		 	
		int itr = 0; PNODE<T> temp = pFirst;
		
		for ( itr = 1,temp = pFirst ; itr < (pos-1) ; itr++,temp = temp -> Next ){}
		
		n_Node -> Next = temp -> Next;
		temp -> Next = n_Node;
		
		size++;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Display_LL
// Description : Display all the elements in the linked list
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Singly_Linear_LL<T> :: Display_LL()
{
	PNODE<T> temp = pFirst;
	
	while ( temp != NULL )
	{
		cout << "|" << temp->data << "|->";
		temp = temp -> Next;  
	}
	cout << "NULL" << endl;
}


template <typename T>
int Singly_Linear_LL<T> :: Count()
{
	return size;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Delete_Front
// Description : function to DELETE element at First position of the linked list .
// INPUT : NONE
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Singly_Linear_LL<T> :: Delete_Front()
{
	if( pFirst != NULL )
	{
		if( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
		}
		else
		{
			PNODE<T> temp = pFirst;
			pFirst = pFirst -> Next;
			delete temp;
		}
		size--;
	}	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Delete_End
// Description : function to DELETE element at LAST position of the linked list .
// INPUT : NONE
//
// Variable Desc.: pos = position 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Singly_Linear_LL<T> :: Delete_End()
{
	if( pFirst != NULL )
	{
		if( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
		}
		else
		{
			PNODE<T> temp = pFirst;
			
			while (temp -> Next -> Next != NULL)
			{
				temp = temp -> Next;
			}
			
			delete temp -> Next;
			temp -> Next = NULL;
		}
		size--;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Delete_At_X_Pos
// Description : function to DELETE element at 'X' position , 
//				 which is defiened by the user.
// INPUT : NONE
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Singly_Linear_LL<T> :: Delete_At_X_Pos ( int pos )
{
	// Filter
	if ( (pos < 1) || (pos > size) )
	{
		return;
	}	
	
	if ( pos == 1 )
	{
		Delete_Front();
	}
	else if ( pos == size )
	{
		Delete_End();
	}
	else
	{
		PNODE<T> temp = pFirst; PNODE<T> targated = NULL;
		int itr = 0;
		for (itr = 1,temp = pFirst ; itr < (pos-1) ; itr++,temp = temp-> Next){}
		
		targated = temp -> Next;
		temp -> Next = temp -> Next -> Next;
		delete targated;
		
		size--;
	}
	
	
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Singly_Circular_LL methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Singly_Circular_LL
// Description : Contructor for class Singly_Circular_LL to initialize all the characteristics of the class
// INPUT : NODE 
//
// variable desc: pFirst = pointer First ; pointing to first node of the linked list
//				  pLast = pointer Last ; pointing the last element of the linked list
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Singly_Circular_LL<T> :: Singly_Circular_LL()
{
	pFirst = NULL;
	pLast = NULL;
	size = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : ~Singly_Circular_LL
// Description : Destructor for class Singly_Circular_LL to deallocate the allocated resources in the LL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Singly_Circular_LL<T> :: ~Singly_Circular_LL()
{
	if ( size != 0 )
	{
		PNODE<T> temp = NULL;
		for ( int itr = 1 ; itr <= size ; itr++ )
		{
			temp = pFirst;
			pFirst = pFirst -> Next;
			delete temp;
			temp = NULL;
		}
	}
	pFirst = NULL;
	pLast = NULL;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_Front
// Description : function to insert element at first position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Singly_Circular_LL<T> :: Insert_Front( T n_Data )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if( pFirst == NULL )
	{
		pFirst = n_Node;
		pLast = n_Node;
	
	}
	else
	{
		n_Node -> Next = pFirst;
		pFirst = n_Node; 	 
	}
	pLast -> Next = pFirst;
	size++;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_End
// Description : function to insert element at Last position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Singly_Circular_LL<T> :: Insert_End( T n_Data )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if( size == 0 )
	{
		pFirst = n_Node;
		pLast = n_Node;
	}
	else
	{
		PNODE<T> temp = pFirst;
		
		pLast -> Next = n_Node;
		pLast = n_Node;
	}
	pLast -> Next = pFirst;
	size++;
}

template <typename T>
void Singly_Circular_LL<T> :: Insert_At_X_Pos( T n_Data , int pos )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	// Filter
	if ( pos < 1 || pos > (size+1) )
	{
		return;
	}
	
	if ( pos == 1 )
	{
		Insert_Front(n_Data);
	}
	else if ( pos == (size+1) )
	{
		Insert_End( n_Data );
	}
	else
	{
		PNODE<T> n_Node = new NODE<T>;
		n_Node -> Next = NULL;
		n_Node -> data = n_Data;
		
		PNODE<T> temp = pFirst;
		for ( int itr = 1 ; itr < (pos-1) ; itr++ )
		{
			temp = temp -> Next;
		}
		
		n_Node -> Next = temp -> Next;
		temp -> Next = n_Node;
		
		size++;
	}
}

template <typename T>
void Singly_Circular_LL<T> :: Delete_Front()
{
	if ( pFirst != NULL )
	{
		if( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
			pLast = NULL;
		}
		else
		{
			pFirst = pFirst -> Next;
			delete pLast -> Next;
			pLast -> Next = pFirst; 
		}
		size--;
	}
}

template <typename T>
void Singly_Circular_LL<T> :: Delete_End()
{
	if ( size != 0 )
	{
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
			pLast = NULL;
		}
		else
		{
			PNODE<T> temp = pFirst;
			while ( temp -> Next != pLast )
			{
				temp = temp -> Next;
			}
			delete pLast;
			pLast = temp;
			pLast -> Next = pFirst;
		}
		size--;
	}
}

template <typename T>
void Singly_Circular_LL<T> :: Delete_At_X_Pos( int pos )
{
	// Filter
	if ( (pos < 1) || (pos > size) )
	{
		return;
	}
	
	if ( pFirst != NULL )
	{
		if ( pos == 1 )
		{
			Delete_Front();
		}
		else if ( pos == size )
		{
			Delete_End();
		}
		else
		{
			PNODE<T> temp = pFirst;
			for ( int itr = 1 ; itr < (pos-1) ; itr++ , temp = temp -> Next ){}
			
			PNODE<T> targated = temp -> Next;
			temp -> Next = temp -> Next -> Next;
			delete targated;
			size--;	
		}
	}
}

template <typename T>
int Singly_Circular_LL<T> :: Count()
{
	return size;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Display_LL
// Description : Display all the elements in the linked list
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Singly_Circular_LL<T> :: Display_LL()
{
	PNODE<T> temp = pFirst;
	
	if ( size == 0 )
		{
			return;
		}
		do 
		{
			cout << "|" << temp->data << "|->" ;
			temp = temp -> Next;
		}while( temp != pLast -> Next );
		
		cout << "->" << endl;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Doubly_Linear_LL methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Doubly_Linear_LL
// Description : Contructor for class Doubly_Linear_LL to initialize all the characteristics of the class
// INPUT : NODE 
//
// variable desc: pFirst = pointer First ; pointing to first node of the linked list			  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Doubly_Linear_LL<T> :: Doubly_Linear_LL()
{
	pFirst = NULL;
	size = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : ~Doubly_Linear_LL
// Description : Destructor for class Doubly_Linear_LL to deallocate the allocated resources in the LL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Doubly_Linear_LL<T> :: ~Doubly_Linear_LL()
{
	d_PNODE<T> temp = NULL;
	while ( pFirst != NULL )
	{
		temp = pFirst;
		pFirst = pFirst -> Next;
		delete temp;
		temp = NULL;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_Front
// Description : function to insert element at first position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Doubly_Linear_LL<T> :: Insert_Front( T n_Data )
{
	d_PNODE<T> n_Node = new d_NODE<T>;
	n_Node -> data = n_Data;
	n_Node -> Next = NULL;
	n_Node -> Prev = NULL;

	if ( pFirst == NULL )
	{
		pFirst = n_Node;
	}
	else
	{
		n_Node -> Next = pFirst;
		n_Node -> Next -> Prev = n_Node;
		pFirst = n_Node;
	}
	size++;
}

template <typename T>
void Doubly_Linear_LL<T>  :: Insert_End( T n_Data )
{
	d_PNODE<T> n_Node = new d_NODE<T>;
	n_Node -> Prev = NULL;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;

	if ( pFirst == NULL )
	{
		pFirst = n_Node;
	}
	else
	{
		d_PNODE<T> temp = pFirst;
		while ( temp -> Next != NULL )
		{
			temp = temp -> Next;
		}

		temp -> Next = n_Node;
		n_Node -> Prev = temp;
	}
	size++;
}

template <typename T>
void Doubly_Linear_LL<T> :: Insert_At_X_Pos( T n_Data , int pos )
{
	if ( (pos < 1) || (pos > (size+1)) )
	{
		return;
	}

	if( pos == 1 )
	{
		Insert_Front( n_Data );
	}

	else if ( pos == (size+1) )
	{
		this -> Insert_End( n_Data );
	}
	else
	{
		d_PNODE<T> n_Node = new d_NODE<T>;
		n_Node -> Next = NULL;
		n_Node -> Prev = NULL;
		n_Node -> data = n_Data;

		d_PNODE<T> temp = pFirst;
		for ( int itr = 1 ; itr < (pos-1) ; itr++ )
		{
			temp = temp -> Next;
		}
		
		n_Node -> Next = temp -> Next;
		n_Node -> Next -> Prev = n_Node;
		n_Node -> Prev = temp;
		temp -> Next = n_Node;
		
		size++;
	}
	
}

template <typename T>
void Doubly_Linear_LL<T> :: Delete_Front()
{
	if( pFirst != NULL )
	{
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
		}
		else
		{
			pFirst = pFirst -> Next;
			delete pFirst -> Prev;
			pFirst -> Prev = NULL;
		}
		size--;
	}
}

template <typename T>
void Doubly_Linear_LL<T> :: Delete_End()
{
	if( pFirst != NULL )
	{
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
		}
		else
		{
			d_PNODE<T> temp = pFirst;
			while( temp -> Next -> Next != NULL )
			{
				temp = temp -> Next;
			}
			delete temp -> Next;
			temp -> Next = NULL;
		}
		size--;
	}	
}

template <typename T>
void Doubly_Linear_LL<T> :: Delete_At_X_Pos ( int pos )
{
	if ( (pos < 1) || (pos > size) )
	{
		return;
	}

	if ( pos == 1 )
	{
		Delete_Front();
	}
	else if ( pos == size )
	{
		Delete_End();
	}
	else
	{
		int itr = 0;
		d_PNODE<T> temp = pFirst;
		for ( itr = 1 ; itr < (pos-1) ; itr++,temp=temp->Next ){}

		temp -> Next = temp -> Next -> Next;
		delete temp -> Next -> Prev;
		temp -> Next -> Prev = temp;
		size--;
	}
	
}

template <typename T>
void Doubly_Linear_LL<T> :: Display_LL()
{
	d_PNODE<T> temp = pFirst;

	while ( temp != NULL )
	{
		cout << "|" << temp -> data << "|->";
		temp = temp -> Next;
	}
	cout << "NULL" << endl;
}

template <typename T>
int Doubly_Linear_LL<T> :: Count()
{
	return size;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Doubly_Circular_LL methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Doubly_Circular_LL
// Description : Contructor for class Doubly_Circular_LL to initialize all the characteristics of the class
// INPUT : NODE 
//
// variable desc: pFirst = pointer First ; pointing to first node of the linked list
//				  pLast = pointer Last ; pointing the last element of the linked list			  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Doubly_Circular_LL<T> :: Doubly_Circular_LL()
{
	pFirst = NULL;
	pLast = NULL;
	size = 0;
}
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : ~Doubly_Circular_LL
// Description : Destructor for class Doubly_Circular_LL to deallocate the allocated resources in the LL
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>  
Doubly_Circular_LL<T> :: ~Doubly_Circular_LL()
{
	if ( size != 0 )
	{
		d_PNODE<T> temp = NULL;
		
		for(int i = 1; i <= size; i++)
		{
		    temp = pFirst;
		    delete temp;
		    pFirst = pFirst -> Next;
		    temp = NULL;
		}
	}
	pFirst = NULL;
	pLast = NULL;
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Func Name : Insert_Front
// Description : function to insert element at first position of the linked list
// INPUT : generic data 
//
// variable desc: n_NODE = new node
//				  n_Data = new data
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T> 
void Doubly_Circular_LL<T> :: Insert_Front ( T n_Data )
{
	d_PNODE<T> n_Node = new d_NODE<T>;
	n_Node -> Prev = NULL;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if ( size == 0 )
	{
		pFirst = n_Node;
		pLast = n_Node;
	}
	else
	{
		n_Node -> Next = pFirst;
		pFirst -> Prev = n_Node;
		pFirst = n_Node;
		
	}
	
	pFirst -> Prev = pLast;
	pLast -> Next = pFirst;
	size++;
}

template <typename T> 
void Doubly_Circular_LL<T> :: Insert_End ( T n_Data )
{
	d_PNODE<T> n_Node = new d_NODE<T>;
	n_Node -> Prev = NULL;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if ( size == 0 )
	{
		pFirst = n_Node;
		pLast = n_Node;
	}
	else
	{
		pLast -> Next = n_Node;
		n_Node -> Prev = pLast;
		pLast = n_Node;
	}
	
	pFirst -> Prev = pLast;
	pLast -> Next = pFirst;
	size++;
}


template <typename T> 
void Doubly_Circular_LL<T> :: Insert_At_X_Pos( T n_Data , int pos )
{
	// Filter
	if ( (pos < 1) || (pos > size+1) )
	{
		return;
	}
	
	if ( pos == 1 )
	{
		this -> Insert_Front(n_Data);
	}
	else if ( pos == (size+1) )
	{
		this -> Insert_End( n_Data );
	}
	else
	{
		d_PNODE<T> n_Node = new d_NODE<T>;
		n_Node -> Prev = NULL;
		n_Node -> Next = NULL;
		n_Node -> data = n_Data;
			
		d_PNODE<T> temp = pFirst;
		for ( int itr=1 ; itr < (pos-1) ; itr++,temp = temp->Next  ){}
		
		n_Node -> Next = temp -> Next;
		temp -> Next -> Prev = n_Node;
		n_Node -> Prev = temp;
		temp -> Next = n_Node;
		
		size++;
	}
}

template <typename T> 
void Doubly_Circular_LL<T> :: Delete_Front()
{
	if ( size != 0 )
	{
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
			pLast = NULL;
		}
		else
		{
			pFirst = pFirst -> Next;
			pFirst -> Prev = NULL;
			
			pFirst -> Prev = pLast;
			pLast -> Next = pFirst;
		}
		
		size--; 
	}
}

template <typename T> 
void Doubly_Circular_LL<T> :: Delete_End()
{
	if ( size != 0 )
	{
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
			pLast = NULL;
		}
		else
		{
			pLast = pLast -> Prev;
			delete pLast -> Next;
			
			pFirst -> Prev = pLast;
			pLast -> Next = pFirst;
		}
		
		size--; 
	}
}

template <typename T> 
void Doubly_Circular_LL<T> :: Delete_At_X_Pos( int pos )
{
	if ( pos < 1 || pos > size )
	{
		return;
	}
	
	if ( pos == 1 )
	{
		this -> Delete_Front();
	}
	else if( pos == size )
	{
		this -> Delete_End();
	}
	else
	{
		d_PNODE<T> temp = pFirst;
		for ( int itr = 1 ; itr < (pos-1) ; itr++,temp=temp->Next ){}
		
		temp -> Next = temp -> Next -> Next;
		delete temp -> Next -> Prev;
		temp -> Next -> Prev = temp;
		
		size--;
	}
}

template <typename T> 
void Doubly_Circular_LL<T> :: Display_LL()
{
    d_PNODE<T> temp = pFirst;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp -> Next;
    }
    cout<<"NULL\n";
}

template <typename T> 
int Doubly_Circular_LL<T> :: Count()
{
	return size;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// StackX methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
StackX<T> :: StackX()
{
	pFirst = NULL;
	size = 0;
}

template <typename T>
StackX<T> :: ~StackX()
{
	PNODE<T> temp = NULL;
	while ( pFirst != NULL )
	{
		temp = pFirst;
		pFirst = pFirst -> Next;
		delete temp;
	}
	pFirst = NULL;
}



template <typename T>
void StackX<T> :: push( T n_Data )
{
	PNODE<T> n_Node = new NODE<T>;
	n_Node -> Next = NULL;
	n_Node -> data = n_Data;
	
	if ( pFirst == NULL )
	{
		pFirst = n_Node;
	}
	else
	{
		n_Node -> Next = pFirst;
		pFirst = n_Node;
	}
	size++;
}

template <typename T>
int StackX<T> :: pop ()
{
	int iRet = -1;
	if ( size != 0 )
	{
		PNODE<T> targated = pFirst;
		iRet = pFirst -> data;
		if ( size == 1 )
		{
			delete pFirst;
			pFirst = NULL;
		}
		else
		{
			pFirst = pFirst -> Next;
			delete targated; 
		}
		size--;
	}
	
	return iRet;
}


template <typename T>
void StackX<T> :: Display_Stack()
{
	PNODE<T> temp = pFirst;
	while ( temp != NULL )
	{
		cout << "| " << temp->data << " |"  << endl;
		temp = temp -> Next;
	}
	cout << "-------" << endl;
}

template <typename T>
int StackX<T> :: Count()
{
	return size;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// QueueX methods
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
QueueX<T> :: QueueX()
{
	pFirst = NULL;
    size = 0;
}

template <typename T>
QueueX<T> :: ~QueueX()
{
	PNODE<T> temp = NULL;
	while ( pFirst != NULL )
	{
		temp = pFirst;
		pFirst = pFirst -> Next;
		delete temp;
	}
	pFirst = NULL;
}

template <typename T>
void QueueX<T> :: enqueue(T n_Data)   
{
	PNODE<T> n_Node = new NODE<T>;
  	n_Node -> Next = NULL;
   	n_Node -> data = n_Data;
   	
    if ( pFirst == NULL )
    {
    	pFirst = n_Node;
    }
    else
	{
    	PNODE<T> temp = pFirst;
        while (temp -> Next != NULL)
        {
        	temp = temp -> Next;
        }
        
        temp -> Next = n_Node;
        n_Node -> Next = NULL;
	}
     size++;
}

template <typename T>
int QueueX<T> :: dequeue()   
{
	int ret = -1;
	PNODE<T> temp = pFirst;
	
	if ( pFirst != NULL )
	{
		ret = temp -> data;
		if( size == 1 )
		{
			delete temp;
			pFirst = NULL;
		}
		else
		{
			pFirst = pFirst -> Next;
			delete temp;
		}
		size--;
		
	}
	return ret;
}

template <typename T>
void QueueX<T> :: Display_Queue()
{
	PNODE<T> temp = pFirst;
	while (temp != NULL)
	{
		cout << "| " << temp -> data << " | <- " ; 
		temp = temp -> Next;
	}
	cout << endl;
}

template <typename T>
int QueueX<T> :: Count()
{
    return size;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BST_X methods
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T>
BST_X<T> :: BST_X()
{
	size = 0;
	pFirst = NULL;
}

template <typename T>
void BST_X<T> :: Insert( T n_Data )
{
	PNODE_t<T> n_Node = new NODE_t<T>;
	n_Node -> data = n_Data;
	n_Node -> Right = NULL;
	n_Node -> Left = NULL;
	
	PNODE_t<T> temp = pFirst;
	
	if ( pFirst == NULL )
	{
		pFirst = n_Node;
		size++;
	}
	else 
	{
		while ( true )
		{
			if( (temp -> data) == n_Data )
			{
				delete n_Node;
				size++;
				break;
			}
			
			if ( n_Data > (temp -> data) )
			{
				if ( temp -> Right == NULL )
				{	
					temp -> Right = n_Node;
					size++;
					break;
				}
				temp = temp -> Right;
			}
			
			else if ( n_Data < (temp -> data) )
			{
				if ( (temp -> Left) == NULL )
				{
					temp -> Left = n_Node;
					size++;
					break;
				}
				temp = temp -> Left;
			}
		}
	}
}

template <typename T>
bool BST_X<T> :: Search( T data )
{
	bool flag = false;
	
	PNODE_t<T> temp = pFirst;
	
	while ( temp != NULL )
	{
		if ( (temp -> data) == data )
		{
			flag = true;
			break;
		}
		
		if ( data > (temp -> data) )
		{
			temp = temp -> Right;
		}
		else
		{
			temp = temp -> Left;
		}
	}

	return flag;
}

template <typename T>
int BST_X<T> :: Count()
{
	return (this -> size);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


