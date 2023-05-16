#include<bits/stdc++.h>
using namespace std;
#define int long long

const int ALPHABET_SIZE = 26;

// trie node
struct TrieNode{
    struct TrieNode *children[ALPHABET_SIZE];

    bool isEndOfWord;  // isEndOfWord is true if the node represents end of a word
};


// Returns new trie node (initialized to NULL)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = new TrieNode;

    pNode -> isEndOfWord = false;

    for(int i =0; i<ALPHABET_SIZE; i++)
        pNode -> children[i] = NULL;

    return pNode;
};



// If not present, inserts key into trie
// If the key is prefix of trie node, just mark leaf node

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for(int i=0; i< key.length(); i++)
    {
        int index = key[i] - 'a';

        if(!pCrawl -> children[index])
            pCrawl -> children[index] = getNode();

        pCrawl = pCrawl -> children[index];
    }

    pCrawl -> isEndOfWord = true; // mark last node as leaf
}


//Returns true if key presents in trie, else false

bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for(int i=0; i<key.length(); i++)
    {
        int index = key[i] - 'a';

        if(!pCrawl -> children[index])
            return false;

        pCrawl = pCrawl -> children[index];
    }

    return (pCrawl ->isEndOfWord);
}



signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

    // Inputs keys (use only 'a' through 'z' and lower case)

    string keys[5];
    for(int i=0; i<5; i++)
    {
        cin>>keys[i];
    }

    struct TrieNode *root = getNode();

    // construct trie
    for(int i=0; i<5; i++)
    {
        insert(root,keys[i]);
    }

    //search for different keys
    string s ;
    cin>>s;
    if(search(root, s))
        cout<<s<< " "<<" is present in trie"<<endl;
    else cout<<s<<" "<< "is not present in trie"<<endl;


   return 0;
}
