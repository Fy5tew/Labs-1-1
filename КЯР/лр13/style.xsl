<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
    <head>
        <title>Аттестация студентов ФИТ1-2</title>
        <style>
            tr > * {
                text-align: center;
            }

            th {
                background-color: lightgrey;
            }

            td.bad-mark {
                background-color: red;
            }

            td.good-mark {
                background-color: green;
            }
        </style>
    </head>
    <body>
        <h1>Список студентов</h1>
        <table border="1">
            <tr>
                <th rowspan="2">Фамилия</th>
                <th rowspan="2">Имя</th>
                <th colspan="4">Предмет</th>
            </tr>
            <tr>
                <th>ОАиП</th>
                <th>ТРПО</th>
                <th>СЯП</th>
                <th>КЯР</th>
            </tr>
            <xsl:for-each select="marks/student">
                <xsl:sort select="last-name" />
                <tr>
                    <td><xsl:value-of select="last-name" /></td>
                    <td><xsl:value-of select="first-name" /></td>
                    <xsl:choose>
                        <xsl:when test="bap-mark &gt; 8">
                            <td class="good-mark"><xsl:value-of select="bap-mark" /></td>
                        </xsl:when>
                        <xsl:when test="bap-mark &lt; 4">
                            <td class="bad-mark"><xsl:value-of select="bap-mark" /></td>
                        </xsl:when>
                        <xsl:otherwise>
                            <td><xsl:value-of select="bap-mark" /></td>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="sdt-mark &gt; 8">
                            <td class="good-mark"><xsl:value-of select="sdt-mark" /></td>
                        </xsl:when>
                        <xsl:when test="sdt-mark &lt; 4">
                            <td class="bad-mark"><xsl:value-of select="sdt-mark" /></td>
                        </xsl:when>
                        <xsl:otherwise>
                            <td><xsl:value-of select="sdt-mark" /></td>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="spl-mark &gt; 8">
                            <td class="good-mark"><xsl:value-of select="spl-mark" /></td>
                        </xsl:when>
                        <xsl:when test="spl-mark &lt; 4">
                            <td class="bad-mark"><xsl:value-of select="spl-mark" /></td>
                        </xsl:when>
                        <xsl:otherwise>
                            <td><xsl:value-of select="spl-mark" /></td>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="cml-mark &gt; 8">
                            <td class="good-mark"><xsl:value-of select="cml-mark" /></td>
                        </xsl:when>
                        <xsl:when test="cml-mark &lt; 4">
                            <td class="bad-mark"><xsl:value-of select="cml-mark" /></td>
                        </xsl:when>
                        <xsl:otherwise>
                            <td><xsl:value-of select="cml-mark" /></td>
                        </xsl:otherwise>
                    </xsl:choose>
                </tr>
            </xsl:for-each>
        </table>
    </body>
</html>
</xsl:template>
</xsl:stylesheet>