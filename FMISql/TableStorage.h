#pragma once
#include "NodeStorage.h"
#include <chrono> //Including for measuring time

struct Table {
	std::string tableName;
	BTree tree;
};

class TableStorage {
private:
	std::vector<Table> tableList;
public:
	TableStorage();
	TableStorage(const std::vector<Table>&);
	TableStorage(const TableStorage&);
	TableStorage(TableStorage&&) noexcept;
	virtual void operator=(const TableStorage&) = delete;
	virtual ~TableStorage() = 0;

	/// <summary>
	/// Add a table to the list with given table name and it's columns names
	/// </summary>
	/// <param name="Table Name"> - the name of the table that will be inserted</param>
	/// <param name="Arguments"> - array of string which show what are the columns and their names</param>
	virtual void addTable(std::string, std::vector<std::string>) = 0;
	/// <summary>
	/// Delete table with given Name
	/// </summary>
	/// <param name="Table Name"> - name of the table which will be deleted</param>
	virtual void deleteTable(std::string) = 0;
	
	/// <summary>
	/// Show all tables
	/// </summary>
	virtual void showTables() const = 0;

	/// <summary>
	/// Show given tables info
	/// </summary>
	/// <param name="Table name"> - name of the table to show</param>
	virtual void showTable(std::string) const = 0;


};
