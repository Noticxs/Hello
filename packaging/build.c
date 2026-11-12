#include <cpkg.h>

int build() {
  cpkg.package_type = App;
  cpkg.platform = x86_64;

  cpkg.name = "Hello";
  cpkg.description = "A rust app that returns Hello, $USER";
  cpkg.maintainers = (char *[]){"Noticxs", NULL};
  cpkg.version = "0.1.0";
  cpkg.authors = (char *[]){"Noticxs", NULL};

  cpkg.get_url = "https://github.com/Noticxs/Hello.git";
  cpkg.sha256hash = "";
  cpkg.install_source = binary;

  return 0;
}
