/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Reportsubsection.h
 *
 * A Subsection in a Reportsection. It contains 3 Reportsubsectionparts (Header, Body and Footer) 
 */

#ifndef OAICommon_Reportsubsection_H
#define OAICommon_Reportsubsection_H

#include <QJsonObject>

#include "OAICommon_Reportsubsectionpart.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Reportsubsectionpart;

class OAICommon_Reportsubsection : public OAIObject {
public:
    OAICommon_Reportsubsection();
    OAICommon_Reportsubsection(QString json);
    ~OAICommon_Reportsubsection() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Reportsubsectionpart getObjReportsubsectionpartHeader() const;
    void setObjReportsubsectionpartHeader(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_header);
    bool is_obj_reportsubsectionpart_header_Set() const;
    bool is_obj_reportsubsectionpart_header_Valid() const;

    OAICommon_Reportsubsectionpart getObjReportsubsectionpartBody() const;
    void setObjReportsubsectionpartBody(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_body);
    bool is_obj_reportsubsectionpart_body_Set() const;
    bool is_obj_reportsubsectionpart_body_Valid() const;

    OAICommon_Reportsubsectionpart getObjReportsubsectionpartFooter() const;
    void setObjReportsubsectionpartFooter(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_footer);
    bool is_obj_reportsubsectionpart_footer_Set() const;
    bool is_obj_reportsubsectionpart_footer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Reportsubsectionpart obj_reportsubsectionpart_header;
    bool m_obj_reportsubsectionpart_header_isSet;
    bool m_obj_reportsubsectionpart_header_isValid;

    OAICommon_Reportsubsectionpart obj_reportsubsectionpart_body;
    bool m_obj_reportsubsectionpart_body_isSet;
    bool m_obj_reportsubsectionpart_body_isValid;

    OAICommon_Reportsubsectionpart obj_reportsubsectionpart_footer;
    bool m_obj_reportsubsectionpart_footer_isSet;
    bool m_obj_reportsubsectionpart_footer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Reportsubsection)

#endif // OAICommon_Reportsubsection_H
