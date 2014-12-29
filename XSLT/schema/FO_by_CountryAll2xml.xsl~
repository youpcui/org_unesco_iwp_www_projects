<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:strip-space elements="*"/>
    <xsl:output method="xml" indent="yes" omit-xml-declaration="yes"/>

    <xsl:template match="text()">
        <xsl:value-of select='normalize-space()'/>
    </xsl:template>

    <xsl:template match="@*|node()">
        <xsl:copy>
            <xsl:apply-templates/>
        </xsl:copy>
    </xsl:template>

    <xsl:template match="ERCDB.dbo.ViewMSList-Regions-grouped">
        <xsl:copy>
            <xsl:apply-templates/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/Permanent_Delegations.xml')//Permanent_Delegation/PermDel.dbo.PermDel2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/HeadsOfStates2xml.xml')//ERCDB.dbo.HeadsofStates2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/FO_by_CountryAll2xml.xml')//ERCDB.dbo.FO_By_Country_All_2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/cp/XMLfilesspec_files/NCList_2_xml.asp')//NatCom/NationalCommission[@countryid=current()/ISOCode]"/>  
        </xsl:copy>
    </xsl:template>
   
    <xsl:template match="ERCDB.dbo.FO_By_Country_All_2xml">
        <xsl:element name="fo_by_country">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FO_ID">
        <xsl:element name="FO_ID">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="ISOCode">
        <xsl:element name="ISOCode">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="ISO3">
        <xsl:element name="ISO3">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="CountryE">
        <xsl:element name="name xml_lang=EN">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameE">
        <xsl:element name="foname xml_lang=EN">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameF">
        <xsl:element name="foname xml_lang=FR">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameS">
        <xsl:element name="foname xml_lang=ES">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameA">
        <xsl:element name="foname xml_lang=AR">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameC">
        <xsl:element name="foname xml_lang=CN">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="FONameR">
        <xsl:element name="foname xml_lang=RU">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="TypeOfficeE">
        <xsl:element name="type_office xml_lang=EN">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="TypeOfficeF">
        <xsl:element name="type_office xml_lang=FR">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="TypeOfficeS">
        <xsl:element name="type_office xml_lang=ES">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="TypeOfficeA">
        <xsl:element name="type_office xml_lang=AR">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="RegionE">
        <xsl:element name="region xml_lang=EN">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="RegionF">
        <xsl:element name="region xml_lang=FR">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="RegionS">
        <xsl:element name="region xml_lang=ES">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="ISO3">
        <xsl:element name="ISO3">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>



</xsl:stylesheet>
