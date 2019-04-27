void quickSort(int arr[], int left, int right) {
    int index = partition(arr, left, right);
    if (left < index - 1) {
        quickSort(arr, left, index - 1);
    }

    if (index < right) {
        quickSort(arr, index, right);
    }
}

int partition(int arr[], int left, int right) {
    int pivot = arr[(left +　right) / 2];
    while (left <= right) {
        while (arr[left] < pivot) {
            left++;
        }

        while (arr[right] > pivot) {
            right--;
        }

        if (left <= right) {
            swap(arr, left, right);
            left++;
            right--;
        }
    }

    return left;
}


struct node {
    int data;
    struct node *left;
    struct node *right;
};

/* Given a binary tree, print its nodes according to the 
  "bottom-up" postorder traversal. */
void printPostorder(struct node *node){
    if (node == NULL) {
        return;
    }

    // first recur on left subtree 
    printPostorder(node->left);
    printPostorder(node->right);
    print("%d", node->data);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) {
    if (node == NULL){
        return ;
    }

    printInorder(node->left);
    printf("%d", node->data);
    printInorder(node->right);

}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node *node){
    if (node == NULL) {
        return;
    }

    printf("%d", node->data);
    printPreorder(node->left);
    printPreorder(node->right);

}
