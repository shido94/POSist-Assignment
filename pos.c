#include<stdio.h>


struct node {
	char data;
	int nodeNumber;
	char nodeId;
	char referenceNodeId;
   char childReferenceNodeId;
	char genesisReferenceNodeId;
	char HashValue;
	struct node *left;
	struct node * right; 
};

int main(){
	struct node* data = null;
	struct node* nodeNumber = 1;
}




// create genesis node. genesis node has parent node as null
// create set of child nodes of particular node
// create a child node that originate from a particular node.
// encryt and decrypt the data inside the node
// verify the owner of node with the encryption key. symmetric encryption shows the data. the integrity of the data is checked by computing the hash value of the data and checking with the already 

