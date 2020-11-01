import java.util.Objects;

public class HashTable {
	private HashTableEntry hashTable[] = new HashTableEntry[11];

	public HashTable() { //constructor
		super();
	}

	public int hashValue(char[] username, int keySize){ //convert string to hash value
		int h = username[0];
		
		for (int j = 1; j < keySize; j++){
			h = (h*32 + username[j]) % 11; 
		}
		
		return h;
	}
	
	public int hashInsert (HashTableEntry entry) {
		String username=entry.getKey();
		char ch[]= new char[username.length()];
		for(int i=0;i<username.length();i++){
			ch[i]=username.charAt(i);
		}
		
		int x;
		x = hashValue(ch,username.length());
		
		while(hashTable[x] != null) {
			x = (x + 1) % 11;
		}
		
		hashTable[x] = entry;
		return x;
	}
	
	public int hashSearch (String nickname) { //to search a username and 
	   
		char ch[]= new char[nickname.length()];
		
		for(int i=0;i<nickname.length();i++) {
			ch[i]=nickname.charAt(i);
		}
		
		int x;
		x = hashValue(ch,nickname.length());
		
		while((hashTable[x] != null) && (Objects.equals((hashTable[x].getKey()), nickname)==false)) {
			x = (x + 1) % 11;
		}
		
		if(hashTable[x]!=null) {
			if (hashTable[x].getKey().equals(nickname)) {
				return x; // Found
			}
		}
		return -1; // Not found
	}
	
	
	public String ArrayFullname(int index) {
      return hashTable[index].getValue();
	}
	
	
	
	public int hashDelete (String nickname) {
		   
		char ch[]= new char[nickname.length()];
		for(int i=0;i<nickname.length();i++) {
			ch[i]=nickname.charAt(i);
		}
		
		int x; 
		x = hashValue(ch,nickname.length());
		
		while((hashTable[x] != null) && (Objects.equals((hashTable[x].getKey()), nickname)==false)){
			x = (x + 1) % 11;
		}
		
		if(hashTable[x]!=null) {
			if (hashTable[x].getKey().equals(nickname)) {
				hashTable[x].setKey("deleted");
			}
			
			System.out.println("user with nickname "+nickname + " has been deleted");
			return x; // deleted
		}
		
		System.out.println("user with nickname "+nickname + " has not been found");
		return -1; // Not found
	}
	
}