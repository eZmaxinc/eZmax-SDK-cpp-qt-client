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
 * OAITimezone_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/timezone/getAutocomplete
 */

#ifndef OAITimezone_getAutocomplete_v2_Response_mPayload_H
#define OAITimezone_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAITimezone_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAITimezone_AutocompleteElement_Response;

class OAITimezone_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAITimezone_getAutocomplete_v2_Response_mPayload();
    OAITimezone_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAITimezone_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAITimezone_AutocompleteElement_Response> getAObjTimezone() const;
    void setAObjTimezone(const QList<OAITimezone_AutocompleteElement_Response> &a_obj_timezone);
    bool is_a_obj_timezone_Set() const;
    bool is_a_obj_timezone_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAITimezone_AutocompleteElement_Response> a_obj_timezone;
    bool m_a_obj_timezone_isSet;
    bool m_a_obj_timezone_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITimezone_getAutocomplete_v2_Response_mPayload)

#endif // OAITimezone_getAutocomplete_v2_Response_mPayload_H
