/**
 * @file
 *  Octree.hpp
 * @author
 *  Oihan Abruna, 540000522, oihan.a@digipen.edu
 * @date
 *  2025/03/11
 * @brief
 *  Declaration of octree
 * @copyright
 *  Copyright (C) 2025 DigiPen Institute of Technology.
 */

#ifndef OCTREE_HPP
#define OCTREE_HPP

#include "Shapes.hpp"
#include <unordered_map> // Used as hash map for the nodes

namespace CS350 
{
    // Forward declarations
    struct GameObject;

    struct Node
    {
        Node() : mLocCode(0), mChildren(0), mObjectList(nullptr) {}

        void SetChildBitmask(unsigned childIdx);
        void ClearChildBitmask(unsigned childIdx);
        bool IsChildActive(unsigned childIdx) const;

        void InsertObject(GameObject* obj);
        void RemoveObject(GameObject* obj);

        uint32_t mLocCode;
        uint8_t mChildren;
        GameObject* mObjectList;
    };

    class Octree
    {
    public:

        Octree();

        void Initialize(unsigned rootSize, ivec3 min = ivec3(0));
        void Clear();

        void SetRootSize(unsigned rootSize);
        void SetRootMin(ivec3 min);

        void ComputeInitialBitPos();

        void Update();
        void UpdateNode(Node* node);

        void InsertObject(Node* currentNode, GameObject* obj);
        void RemoveNode(const Node* node);
        void RemoveEmptyNodes(const Node* node);

        unsigned GetDepth(const Node* node, unsigned depth);

        Node* GetNode(uint32_t locCode);
        Node* DetermineNode(const AABB& aabb);

        unsigned GetNodeSize(unsigned depth) const;
        AABB GetNodeAABB(uint32_t locCode) const;

        unsigned GetRootSize() const { return mRootSize; }
        ivec3 GetRootMin() const { return mMin; }
        unsigned GetNodeCount() const { return static_cast<unsigned>(mNodes.size()); }

        static uint32_t GetAxisLocCode(uint32_t axisPos, unsigned bitPos);
        static uint32_t DetermineLocationalCode(ivec3 p, unsigned bitPos);
        static uint32_t GetCommonLocationalCode(uint32_t locCode0, uint32_t locCode1);
        static uint32_t GetParentLocationalCode(uint32_t locCode);
        static uint32_t GetChildLocationalCode(uint32_t locCode, unsigned childIdx);

        static unsigned GetChildIdx(uint32_t locCode);
        static unsigned GetNodeDepth(uint32_t locCode);

    private:

        std::unordered_map<uint32_t, Node> mNodes;
        unsigned mRootSize;
        unsigned mInitialBitPos;
        ivec3 mMin;

        // Constant properties of the octree
        static const unsigned sAxisCount = 3;
        static const unsigned sMaxDepth = 10;
    };
}

#endif // OCTREE_HPP
