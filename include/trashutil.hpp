#include "filesystem"
#include "iostream"

#include "string"
#include <expected>
#include <filesystem>
#include <optional>
#include <system_error>
#include <type_traits>

using std::cout;
using std::endl;
using std::optional;
using std::string;
using std::filesystem::path;

class TrashItem {
public:
  string root_directory;
  string hash;

  TrashItem(string abs_file_path) {
    // todo: we hash the absolute file path to store so that we know which item
    // to restore.
  }
};

enum class TrashError {
  InvalidPath,
};

class TrashUtil {
private:
  void hash_path(path item_path) { throw "not yet implemented"; }
  void check_valid_path(path abs_item_path) {
    throw "not yet implemented: check_valid_path";
  }

public:
  // Put an item in the trash directory, wherever that is stored.
  std::expected<string, TrashError> trash_item(path abs_item_path) {
    if (!std::filesystem::exists(abs_item_path)) {
      return std::unexpected(TrashError::InvalidPath);
    }

    string full_path_item = absolute(abs_item_path);

    throw "TODO: restore item";
  }
  // Returns an item, given its filename, to the original directory it was
  // stored in, if it exists. if the directory does not exist anymore, or the
  // file does not exist, it returns None. Otherwise, it returns the full path
  // to the restored file.
  optional<path> restore_item(string item_name) {
    throw "Not yet implemented: restore item";
  }

  ~TrashUtil() {}
};
