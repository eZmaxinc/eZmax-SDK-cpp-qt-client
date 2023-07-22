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
 * OAICompany_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/company/getAutocomplete
 */

#ifndef OAICompany_getAutocomplete_v2_Response_mPayload_H
#define OAICompany_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAICompany_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICompany_AutocompleteElement_Response;

class OAICompany_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAICompany_getAutocomplete_v2_Response_mPayload();
    OAICompany_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAICompany_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICompany_AutocompleteElement_Response> getAObjCompany() const;
    void setAObjCompany(const QList<OAICompany_AutocompleteElement_Response> &a_obj_company);
    bool is_a_obj_company_Set() const;
    bool is_a_obj_company_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICompany_AutocompleteElement_Response> a_obj_company;
    bool m_a_obj_company_isSet;
    bool m_a_obj_company_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICompany_getAutocomplete_v2_Response_mPayload)

#endif // OAICompany_getAutocomplete_v2_Response_mPayload_H