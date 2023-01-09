#pragma once 

int GetPointTotalForStudent(std::map<std::string, std::string> m, std::string s);

int GetTopNHomeworkTotalForStudent(std::map<std::string, std::string> m, int number);

int GetNumberOfMissingLabsForStudent(std::map<std::string, std::string> m);

int GetPointTotalForStudent(std::map<std::string, std::string> m);

std::map<std::string, std::map<std::string, std::string>> GetIDToInfoFromCSV(std::string file_name);

std::map<std::string, double> GetIDToGrade(std::map<std::string, std::map<std::string, std::string>> m);

std::set<std::string> GetStudentsEligibleForHonorsCredit(std::map<std::string, std::map<std::string, std::string>> m, int n);
