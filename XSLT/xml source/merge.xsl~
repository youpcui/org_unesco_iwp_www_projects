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
            <!--<xsl:copy-of select="document('Permanent_Delegations.xml')//Permanent_Delegation/PermDel.dbo.PermDel2xml[ISO3=current()/ISO3]"/>-->
            <!--<xsl:copy-of select="document('HeadsOfStates.xml')//ERCDB.dbo.HeadsofStates2xml[ISO3=current()/ISO3]"/>-->
            <!--<xsl:copy-of select="document('FO_by_CountryAll.xml')//ERCDB.dbo.FO_By_Country_All_2xml[ISO3=current()/ISO3]"/>-->
            <!--<xsl:copy-of select="document('national_commission.xml')//NatCom/NationalCommission[@countryid=current()/ISOCode]"/>-->
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/Permanent_Delegations.xml')//Permanent_Delegation/PermDel.dbo.PermDel2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/HeadsOfStates2xml.xml')//ERCDB.dbo.HeadsofStates2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/xml_files/FO_by_CountryAll2xml.xml')//ERCDB.dbo.FO_By_Country_All_2xml[ISO3=current()/ISO3]"/>
            <xsl:copy-of select="document('http://www.unesco.org/eri/cp/XMLfilesspec_files/NCList_2_xml.asp')//NatCom/NationalCommission[@countryid=current()/ISOCode]"/>   
        </xsl:copy>
    </xsl:template>
    
</xsl:stylesheet>
