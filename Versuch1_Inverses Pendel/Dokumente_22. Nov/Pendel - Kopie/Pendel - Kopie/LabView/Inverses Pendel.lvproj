<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="13008000">
	<Property Name="varPersistentID:{271FF828-6481-41C4-A59D-3FCF20464E6C}" Type="Ref">/Mein Computer/Konstanten.lvlib/Beschleunigung</Property>
	<Property Name="varPersistentID:{49BB27E7-8F09-4041-8348-5D2782315726}" Type="Ref">/Mein Computer/Konstanten.lvlib/mk</Property>
	<Property Name="varPersistentID:{54EEF36D-F289-4751-BCE7-C871AA5C3DB4}" Type="Ref">/Mein Computer/Konstanten.lvlib/p'</Property>
	<Property Name="varPersistentID:{B11C032A-BB7A-4B85-BFDD-493D4DB03C0D}" Type="Ref">/Mein Computer/Konstanten.lvlib/Ls</Property>
	<Property Name="varPersistentID:{BD6BADA6-634C-47F3-938E-6F6CB7780F54}" Type="Ref">/Mein Computer/Konstanten.lvlib/Geschwindigkeit</Property>
	<Property Name="varPersistentID:{D93297EC-2F79-4D6E-AD38-73D567628564}" Type="Ref">/Mein Computer/Konstanten.lvlib/mp</Property>
	<Property Name="varPersistentID:{ED1DD711-CAFF-41EF-B6FD-BA037FBFC911}" Type="Ref">/Mein Computer/Konstanten.lvlib/Winkel</Property>
	<Property Name="varPersistentID:{F0706DA7-D85E-4CA6-B00C-6C57B1E066F7}" Type="Ref">/Mein Computer/Konstanten.lvlib/p''</Property>
	<Item Name="Mein Computer" Type="My Computer">
		<Property Name="IOScan.Faults" Type="Str"></Property>
		<Property Name="IOScan.NetVarPeriod" Type="UInt">100</Property>
		<Property Name="IOScan.NetWatchdogEnabled" Type="Bool">false</Property>
		<Property Name="IOScan.Period" Type="UInt">10000</Property>
		<Property Name="IOScan.PowerupMode" Type="UInt">0</Property>
		<Property Name="IOScan.Priority" Type="UInt">9</Property>
		<Property Name="IOScan.ReportModeConflict" Type="Bool">true</Property>
		<Property Name="IOScan.StartEngineOnDeploy" Type="Bool">false</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">Mein Computer/VI-Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">Mein Computer/VI-Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Beobachter" Type="Folder">
			<Item Name="Beobachter" Type="Folder">
				<Item Name="d(f2+g2u)_dx3.vi" Type="VI" URL="../Beobachter/d(f2+g2u)_dx3.vi"/>
				<Item Name="d(f2+g2u)_dx4.vi" Type="VI" URL="../Beobachter/d(f2+g2u)_dx4.vi"/>
				<Item Name="d(f4+g4u)_dx3.vi" Type="VI" URL="../Beobachter/d(f4+g4u)_dx3.vi"/>
				<Item Name="d(f4+g4u)_dx4.vi" Type="VI" URL="../Beobachter/d(f4+g4u)_dx4.vi"/>
				<Item Name="diff_x1.vi" Type="VI" URL="../Beobachter/diff_x1.vi"/>
				<Item Name="diff_x3.vi" Type="VI" URL="../Beobachter/diff_x3.vi"/>
				<Item Name="F.vi" Type="VI" URL="../Beobachter/F.vi"/>
				<Item Name="f2+g2u.vi" Type="VI" URL="../Beobachter/f2+g2u.vi"/>
				<Item Name="f4plusg4u.vi" Type="VI" URL="../Beobachter/f4plusg4u.vi"/>
				<Item Name="f23.vi" Type="VI" URL="../Beobachter/f23.vi"/>
				<Item Name="f24.vi" Type="VI" URL="../Beobachter/f24.vi"/>
				<Item Name="f43.vi" Type="VI" URL="../Beobachter/f43.vi"/>
				<Item Name="f44.vi" Type="VI" URL="../Beobachter/f44.vi"/>
				<Item Name="L11.vi" Type="VI" URL="../Beobachter/L11.vi"/>
				<Item Name="L21.vi" Type="VI" URL="../Beobachter/L21.vi"/>
				<Item Name="L31.vi" Type="VI" URL="../Beobachter/L31.vi"/>
				<Item Name="L32.vi" Type="VI" URL="../Beobachter/L32.vi"/>
				<Item Name="L41.vi" Type="VI" URL="../Beobachter/L41.vi"/>
				<Item Name="L42.vi" Type="VI" URL="../Beobachter/L42.vi"/>
				<Item Name="Nichtlinearer Beobachter.vi" Type="VI" URL="../Beobachter/Nichtlinearer Beobachter.vi"/>
				<Item Name="Root.vi" Type="VI" URL="../Beobachter/Root.vi"/>
				<Item Name="Root1.vi" Type="VI" URL="../Beobachter/Root1.vi"/>
				<Item Name="x3_.vi" Type="VI" URL="../Beobachter/x3_.vi"/>
				<Item Name="x4_.vi" Type="VI" URL="../Beobachter/x4_.vi"/>
			</Item>
		</Item>
		<Item Name="Globale Variablen" Type="Folder">
			<Item Name="Beschleunigung.vi" Type="VI" URL="../PI-Regler/Beschleunigung.vi"/>
			<Item Name="Fsk.vi" Type="VI" URL="../PI-Regler/Fsk.vi"/>
			<Item Name="geschwindigkeit.vi" Type="VI" URL="../PI-Regler/geschwindigkeit.vi"/>
			<Item Name="p&apos;&apos;.vi" Type="VI" URL="../PI-Regler/p&apos;&apos;.vi"/>
			<Item Name="p&apos;.vi" Type="VI" URL="../PI-Regler/p&apos;.vi"/>
			<Item Name="p.vi" Type="VI" URL="../PI-Regler/p.vi"/>
		</Item>
		<Item Name="ErsteRuhelage.vi" Type="VI" URL="../PI-Regler/ErsteRuhelage.vi"/>
		<Item Name="f4+g4u.vi" Type="VI" URL="../Beobachter/f4+g4u.vi"/>
		<Item Name="Konstanten.lvlib" Type="Library" URL="../PI-Regler/Konstanten.lvlib"/>
		<Item Name="MitÜberlagerung.vi" Type="VI" URL="../PI-Regler/MitÜberlagerung.vi"/>
		<Item Name="MitÜberlagerung2.vi" Type="VI" URL="../PI-Regler/MitÜberlagerung2.vi"/>
		<Item Name="NichtlinearerRegler.vi" Type="VI" URL="../PI-Regler/NichtlinearerRegler.vi"/>
		<Item Name="NichtlinearerRegler2.vi" Type="VI" URL="../PI-Regler/NichtlinearerRegler2.vi"/>
		<Item Name="NLR3.vi" Type="VI" URL="../PI-Regler/NLR3.vi"/>
		<Item Name="NLR4.vi" Type="VI" URL="../PI-Regler/NLR4.vi"/>
		<Item Name="Pendelmodell.vi" Type="VI" URL="../PI-Regler/Pendelmodell.vi"/>
		<Item Name="PI.vi" Type="VI" URL="../PI-Regler/PI.vi"/>
		<Item Name="PImitStör.vi" Type="VI" URL="../PI-Regler/PImitStör.vi"/>
		<Item Name="Störgröße.vi" Type="VI" URL="../PI-Regler/Störgröße.vi"/>
		<Item Name="SubsystemModell.vi" Type="VI" URL="../PI-Regler/SubsystemModell.vi"/>
		<Item Name="SubsystemStör.vi" Type="VI" URL="../PI-Regler/SubsystemStör.vi"/>
		<Item Name="vereinfacht.vi" Type="VI" URL="../PI-Regler/vereinfacht.vi"/>
		<Item Name="Weg.vi" Type="VI" URL="../PI-Regler/Weg.vi"/>
		<Item Name="Winkel.vi" Type="VI" URL="../PI-Regler/Winkel.vi"/>
		<Item Name="Abhängigkeiten" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="NILVSim.dll" Type="Document" URL="/&lt;vilib&gt;/Simulation/Implementation/shared/NILVSim.dll"/>
				<Item Name="SIM limit type.ctl" Type="VI" URL="/&lt;vilib&gt;/Simulation/Implementation/Shared/SIM limit type.ctl"/>
			</Item>
		</Item>
		<Item Name="Build-Spezifikationen" Type="Build"/>
	</Item>
</Project>
