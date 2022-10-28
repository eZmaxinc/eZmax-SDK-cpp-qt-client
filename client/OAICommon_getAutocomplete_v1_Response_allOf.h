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
 * OAICommon_getAutocomplete_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAICommon_getAutocomplete_v1_Response_allOf_H
#define OAICommon_getAutocomplete_v1_Response_allOf_H

#include <QJsonObject>

#include "OAICustom_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_AutocompleteElement_Response;

class OAICommon_getAutocomplete_v1_Response_allOf : public OAIObject {
public:
    OAICommon_getAutocomplete_v1_Response_allOf();
    OAICommon_getAutocomplete_v1_Response_allOf(QString json);
    ~OAICommon_getAutocomplete_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_AutocompleteElement_Response> getMPayload() const;
    void setMPayload(const QList<OAICustom_AutocompleteElement_Response> &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_AutocompleteElement_Response> m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_getAutocomplete_v1_Response_allOf)

#endif // OAICommon_getAutocomplete_v1_Response_allOf_H
