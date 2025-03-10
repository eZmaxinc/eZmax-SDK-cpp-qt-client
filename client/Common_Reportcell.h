/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Reportcell.h
 *
 * A cell in a Reportrow 
 */

#ifndef Common_Reportcell_H
#define Common_Reportcell_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Reportcell : public Object {
public:
    Common_Reportcell();
    Common_Reportcell(QString json);
    ~Common_Reportcell() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIReportcellColumnspan() const;
    void setIReportcellColumnspan(const qint32 &i_reportcell_columnspan);
    bool is_i_reportcell_columnspan_Set() const;
    bool is_i_reportcell_columnspan_Valid() const;

    qint32 getIReportcellRowspan() const;
    void setIReportcellRowspan(const qint32 &i_reportcell_rowspan);
    bool is_i_reportcell_rowspan_Set() const;
    bool is_i_reportcell_rowspan_Valid() const;

    QString getSReportcellContent() const;
    void setSReportcellContent(const QString &s_reportcell_content);
    bool is_s_reportcell_content_Set() const;
    bool is_s_reportcell_content_Valid() const;

    qint32 getIReportcellColumn() const;
    void setIReportcellColumn(const qint32 &i_reportcell_column);
    bool is_i_reportcell_column_Set() const;
    bool is_i_reportcell_column_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_reportcell_columnspan;
    bool m_i_reportcell_columnspan_isSet;
    bool m_i_reportcell_columnspan_isValid;

    qint32 m_i_reportcell_rowspan;
    bool m_i_reportcell_rowspan_isSet;
    bool m_i_reportcell_rowspan_isValid;

    QString m_s_reportcell_content;
    bool m_s_reportcell_content_isSet;
    bool m_s_reportcell_content_isValid;

    qint32 m_i_reportcell_column;
    bool m_i_reportcell_column_isSet;
    bool m_i_reportcell_column_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Reportcell)

#endif // Common_Reportcell_H
