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
 * OAIEzsigndocument_submitEzsignform_v1_Request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/submitEzsignform
 */

#ifndef OAIEzsigndocument_submitEzsignform_v1_Request_H
#define OAIEzsigndocument_submitEzsignform_v1_Request_H

#include <QJsonObject>

#include "OAICustom_Ezsignformfieldgroup_Request.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Ezsignformfieldgroup_Request;

class OAIEzsigndocument_submitEzsignform_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_submitEzsignform_v1_Request();
    OAIEzsigndocument_submitEzsignform_v1_Request(QString json);
    ~OAIEzsigndocument_submitEzsignform_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBEzsignformIsdraft() const;
    void setBEzsignformIsdraft(const bool &b_ezsignform_isdraft);
    bool is_b_ezsignform_isdraft_Set() const;
    bool is_b_ezsignform_isdraft_Valid() const;

    QList<OAICustom_Ezsignformfieldgroup_Request> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<OAICustom_Ezsignformfieldgroup_Request> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool b_ezsignform_isdraft;
    bool m_b_ezsignform_isdraft_isSet;
    bool m_b_ezsignform_isdraft_isValid;

    QList<OAICustom_Ezsignformfieldgroup_Request> a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_submitEzsignform_v1_Request)

#endif // OAIEzsigndocument_submitEzsignform_v1_Request_H
