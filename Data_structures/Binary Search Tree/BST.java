public class BST{
	int key;
	BST left,right;
	private static final BST NIL=new BST();
	private BST(){
		left=right=this;
	}
	public BST(int k){
		key=k;
		left=right=NIL;
	}
	public BST(int k,BST l,BST r){
		key=k;
		left=l;
		right=r;
	}
	public BST insert(int k){
		return insert(this,k);
	}
	private BST insert(BST b,int k){
		if(b==NIL)
			return new BST(key);
		if(k<b.key)
			return left=left.insert(k);
		if(k>b.key)
			return right=right.insert(k);
		return this;
	}

	public String toString(){
		if(this==NIL)
				return "";
		String buf="";
		if(left!=NIL)
			buf+=left.toString()+",";
		buf+=key;
		if(right!=NIL)
			buf+=","+right.toString();
		return buf;
	}

	public static void main(String[] args) {
		BST tree=new BST(45);
		tree.insert(20);
		tree.insert(25);
		tree.insert(47);
		tree.insert(22);
		System.out.println(tree);
	}


}