#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage2
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::String^ ville;
		System::String^ code_postal;
		System::String^ pays;
	public:
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setVille(System::String^);
		void setCode_postal(System::String^);
		void setPays(System::String^);

		System::String^ getVille(void);
		System::String^ getCode_postal(void);
		System::String^ getPays(void);

	};
}
