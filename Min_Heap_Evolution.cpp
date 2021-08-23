	#include<iostream>
	#include<climits>
	#include <iterator>
	#include <algorithm>
	using namespace std;
	  
	void swap(int *x, int *y);

	class Manager
	{

	public:
		  int *harr; //main.cpp:141:12: error: ‘int* Manager::harr’ is private within this context
		  int capacity; 
		  int heap_size;
		  int sentinel; 
		Manager(int capacity);
		void CreateMinHeap(int );
		int parent(int i) { return (i-1)/2; }
		int left(int i) { return (2*i + 1); }
		int right(int i) { return (2*i + 2); }
		int FindMin();
		virtual void decreaseKey(int i, int new_val);
		int getMin() { return harr[0]; }
		void deleteKey(int i);
		virtual void insertKey(int k);
		virtual ~Manager();
	};
	  
	Manager::Manager(int cap)
	{
	 cout<<"Constructor of Manager \n"<<endl;   
		heap_size = 0;
		capacity = cap;
		harr = new int[cap];
	}
	  
	void Manager::insertKey(int k)
	{
		if (heap_size == capacity)
		{
			cout << "\nOverflow: Could not insertKey\n";
			return;
		}
	  
		// First insert the new key at the end
		heap_size++;
		int i = heap_size - 1;
		harr[i] = k;
	  
		// Fix the min heap property if it is violated
		while (i != 0 && harr[parent(i)] > harr[i])
		{
		   swap(&harr[i], &harr[parent(i)]);
		   i = parent(i);
		}
	}
	  
	void Manager::decreaseKey(int i, int new_val)
	{
		harr[i] = new_val;
		while (i != 0 && harr[parent(i)] > harr[i])
		{
		   swap(&harr[i], &harr[parent(i)]);
		   i = parent(i);
		}
		CreateMinHeap(0);
	}
	  
	int Manager::FindMin()
	{
		if (heap_size <= 0)
			return INT_MAX;
		if (heap_size == 1)
		{
			heap_size--;
			return harr[0];
		}
	  
		int root = harr[0];
		harr[0] = harr[heap_size-1];
		heap_size--;
		CreateMinHeap(0);
	  
		return root;
	}
	  
	  
	void Manager::deleteKey(int i)
	{
		decreaseKey(i, INT_MIN);
		FindMin();
	}
	  
	void Manager::CreateMinHeap(int i)
	{
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if (l < heap_size && harr[l] < harr[i])
			smallest = l;
		if (r < heap_size && harr[r] < harr[smallest])
			smallest = r;
		if (smallest != i)
		{
			swap(&harr[i], &harr[smallest]);
			CreateMinHeap(smallest);
		}
	}
	Manager::~Manager()
	{
		delete [] harr; 
		cout <<"The destructor of Manager is called"<<endl;
	}
	  
	// A utility function to swap two elements
	void swap(int *x, int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
	class HeapDerived:Manager //class subclass_name : access_mode base_class_name

	{
		public:
		int heap_size;
		int *harr;
		HeapDerived(int k);
		void insertKey(int i);
		void decreaseKey(int i,float j);
		~HeapDerived();
	};
	//In inheritance, the subclass need not have a constructor only if parent class doesn't have a constructor or only default constructor.

//In any case, if parent class happens to have a parameterized constructor, the subclass should have a parameterized constructor which should invoke the parent class constructo

	HeapDerived::HeapDerived(int k):Manager(sentinel)
		{
	    int *harr=new int(k);
		 cout<<"Constructor of HeapDerived \n"<<endl;   
		
	}
	void HeapDerived::insertKey(int k)
	{
		if (heap_size == capacity)
		{
			cout << "\nOverflow: Could not insertKey\n";
			return;
		}
	  
		// First insert the new key at the end
		heap_size++;
		int i = heap_size - 1;
		harr[i] = k;
	  
		// Fix the min heap property if it is violated
		while (i != 0 && harr[parent(i)] > harr[i])
		{
		   swap(&harr[i], &harr[parent(i)]);
		   i = parent(i);
		}
	}
	void HeapDerived::decreaseKey(int i,float j)
	{
	    cout<<"PlaceHolderForAlternatedecreaseKeMechanism"<<endl;
	}

	HeapDerived::~HeapDerived() //return type specification for destructor invalid
	{
		    cout<<"Inside the virtual destructor of HeapDerived"<<endl;
	}
		
	// Driver program to test above functions
	int main()
	{
		Manager h(14);
		HeapDerived heapdi(23);
		int i; 
		h.insertKey(7);//push to heap
		h.insertKey(2);//Minimum an root of heap
		h.insertKey(10);
		h.insertKey(5);
			h.insertKey(8);
		h.insertKey(9);
		heapdi.insertKey(4);
		heapdi.insertKey(3);
		heapdi.insertKey(9);
		heapdi.insertKey(60);
	    heapdi.insertKey(0);
		heapdi.insertKey(4);
		
	  cout<<"Before The deletion of key ManagerHeapWas"<<endl;
	   for (i=0;i<h.heap_size;i++)
	   std::cout <<h.harr[i]  <<endl;
		h.decreaseKey(2, 1);
		cout<<"After The Change MangerHeapIs"<<endl;
		for (i=0;i<h.heap_size;i++)
	   std::cout <<h.harr[i] <<endl;
	   
	   cout<<"Before The deletion of key DerivedHeapWas"<<endl;
	   for (i=0;i<heapdi.heap_size;i++)
	   std::cout <<heapdi.harr[i]  <<endl;
	   heapdi.decreaseKey(2, 1);
	   cout<<"After The Change DerivedHeapIs"<<endl;
	   for (i=0;i<heapdi.heap_size;i++)
	   std::cout <<heapdi.harr[i] <<endl;
	   return 0;
	}