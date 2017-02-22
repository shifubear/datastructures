/*
 * BST.h
 *
 *  Created on: Feb 21, 2017
 *      Author: sfukuzawa14
 */

#ifndef BST_H_
#define BST_H_

template <typename DataType>
class BST {
public:
	/* Construct a BST object.
	 *
	 */
	BST();

	/* Check if BST is empty.
	 *
	 * Returns true if BST is empty and false otherwise.
	 */
	bool empty() const;

private:
	/* Node Class */
	class BinNode {
	public:
		DataType data;
		BinNode * left;
		BinNode * right;

		// BinNode constructors
		// Default constructor
		BinNode()
		: left(0), right(0) {}

		// Explicit constructor
		BinNode(DataType item)
		: data(item), left(0), right(0) {}

	};
	typedef BinNode* BinNodePointer;

	BinNodePointer myRoot;
};

template <typename DataType>
inline BST<DataType>::BST()
: myRoot(0)
  {}

template <typename DataType>
inline bool BST<DataType>::empty() const
{return myRoot == 0; }

#endif /* BST_H_ */
