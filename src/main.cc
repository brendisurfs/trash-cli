#include "CLI11.hpp"
#include "trashutil.hpp"

#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

// So a few main things:
// 1. Need a directory that stores all our trashed data.
// 2. Need some way to reference that data, whether it be a kv of the hash of a
// file, or something
// 3. Need to store the directory that the user trashed from.
// If that directory no longer exists, restore to the current directory.
// 4. Need basic commands: put, restore, empty

int main(int argc, char *argv[]) {
  CLI::App app("Trash Utility");

  bool dry_run{false};
  app.add_flag("-d", dry_run,
               "Run the command without actually running the operation");

  // adding file target to delete
  std::string delete_path;

  CLI::App *delete_cmd = app.add_subcommand(
      "delete", "Moves a file or directory to the trash (~/.Trash)");

  delete_cmd->add_option("path", delete_path, "File or directory to delete")
      ->required();

  // restore
  CLI::App *restore_cmd =
      app.add_subcommand("restore", "Restores a trashed file or directory");

  std::string restore_path;
  restore_cmd->add_option("path", restore_path,
                          "name of the file or directory to restore");

  // Empty
  CLI::App *empty_cmd =
      app.add_subcommand("empty", "Empty the trash directory (~/.Trash)");

  CLI11_PARSE(app, argc, argv);

  cout << "Parsing " << delete_path << endl;
  return EXIT_SUCCESS;
};
