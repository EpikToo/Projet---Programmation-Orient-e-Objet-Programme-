#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage30
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_client;
		System::String^ date1;
		System::String^ date2;
	public:

		System::String^ Select(void) override;
		System::String^ Select2(void);
		System::String^ Select3(void);
		System::String^ Select4(void);
		System::String^ Select5(void);
		System::String^ Select6(void);
		System::String^ Select7(void);
		System::String^ Select8(void);






		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setDate1(System::String^);
		void setDate2(System::String^);

	
	};
}
