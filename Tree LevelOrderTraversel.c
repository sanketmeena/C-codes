int height(struct node* root)
{
    if(root==NULL) return 0;
    int l_h=height(root->left);
    int r_h=height(root->right);
    
    if(l_h > r_h) return(l_h+1);
    else return (r_h+1);
}

void traverse(struct node* root,int d,int h)
{
    if(root==NULL) return;
    if(d==h) printf("%d ",root->data);
    traverse(root->left,d+1,h);
    traverse(root->right,d+1,h);
}
void levelOrder( struct node *root) {
    int h=height(root);
    for(int i=0; i<=h; i++)
    {
        traverse(root,0,i);
    }
}
