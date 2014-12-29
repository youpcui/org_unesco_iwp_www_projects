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
   
    <xsl:template match="NationalCommission">
        <xsl:element name="NatCom">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="Address">
        <xsl:element name="Address">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="Phone">
        <xsl:element name="Phone">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="Fax">
        <xsl:element name="Fax">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="Email">
        <xsl:element name="Email">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

    <xsl:template match="WebsiteNC">
        <xsl:element name="WebsiteNC">
            <xsl:apply-templates/>
        </xsl:element>
    </xsl:template>

 


</xsl:stylesheet>
