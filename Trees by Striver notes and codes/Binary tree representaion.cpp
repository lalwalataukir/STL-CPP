struct Node
{
	int data;
	struct Node* left;
	struct Node* right;

	Node(value)
	{
		data = value;
		left = NULL;
		right = NULL;
	}
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->right = new Node(5);
}


/*

		1
	   / \
	  2   3
	   \
        5
*/