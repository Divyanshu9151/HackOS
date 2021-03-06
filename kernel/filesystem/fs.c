#include "fs.h"

fs_node_t *fs_root = 0; // The root of the filesystem.

uint32_t read_fs(fs_node_t* node, uint32_t offset, uint32_t size, uint8_t *buffer)
{
    if (node->read != 0)
    {
        return node->read(node, offset, size, buffer);
    }
    else
    {
        return 0;
    }
}

uint32_t write_fs(fs_node_t* node, uint32_t offset, uint32_t size, uint8_t* buffer)
{
    if (node->write != 0)
    {
        return node->write(node, offset, size, buffer);
    }
    else
    {
        return 0;
    }
}

void open_fs(fs_node_t* node, uint8_t read, uint8_t write)
{
    if (node->open != 0)
    {
        return node->open(node, read, write);
    }
}

void close_fs(fs_node_t* node)
{
    if (node->close != 0)
    {
        return node->close(node);
    }
}

dirent_t* readdir_fs(fs_node_t* node, uint32_t index)
{
    if(node->readdir != 0 && (node->flags & 0x7) == FS_DIRECTORY)
    {
        return node->readdir(node, index);
    }
    else
    {
        return 0;
    }
    
}

fs_node_t* finddir_fs(fs_node_t* node, char* name)
{
    if(node->finddir != 0 && (node->flags & 0x7) == FS_DIRECTORY)
    {
        return node->finddir(node, index);
    }
    else
    {
        return 0;
    }
}