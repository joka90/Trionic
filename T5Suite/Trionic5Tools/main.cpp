#include <iostream>

//#include <glib/glib.h>
#include <mono/jit/jit.h>
#include <mono/metadata/assembly.h>



int main()
{
	MonoDomain *domain;

	domain = mono_jit_init("myapp");	

	MonoAssembly *assembly;

	assembly = mono_domain_assembly_open(domain, "file.exe");
	if (!assembly)
	  std::cerr << "Error: no assembly" << std::endl;

	//TODO
	std::cout << "TODO: http://www.mono-project.com/docs/advanced/embedding/ :)" << std::endl;

	mono_jit_cleanup (domain);
	return 0;
}
