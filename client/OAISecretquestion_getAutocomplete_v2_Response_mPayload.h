/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISecretquestion_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/secretquestion/getAutocomplete
 */

#ifndef OAISecretquestion_getAutocomplete_v2_Response_mPayload_H
#define OAISecretquestion_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAISecretquestion_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISecretquestion_AutocompleteElement_Response;

class OAISecretquestion_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAISecretquestion_getAutocomplete_v2_Response_mPayload();
    OAISecretquestion_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAISecretquestion_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAISecretquestion_AutocompleteElement_Response> getAObjSecretquestion() const;
    void setAObjSecretquestion(const QList<OAISecretquestion_AutocompleteElement_Response> &a_obj_secretquestion);
    bool is_a_obj_secretquestion_Set() const;
    bool is_a_obj_secretquestion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAISecretquestion_AutocompleteElement_Response> a_obj_secretquestion;
    bool m_a_obj_secretquestion_isSet;
    bool m_a_obj_secretquestion_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISecretquestion_getAutocomplete_v2_Response_mPayload)

#endif // OAISecretquestion_getAutocomplete_v2_Response_mPayload_H
