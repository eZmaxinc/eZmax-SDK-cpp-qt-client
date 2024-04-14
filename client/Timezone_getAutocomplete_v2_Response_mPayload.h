/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Timezone_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/timezone/getAutocomplete
 */

#ifndef Timezone_getAutocomplete_v2_Response_mPayload_H
#define Timezone_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Timezone_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Timezone_AutocompleteElement_Response;

class Timezone_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Timezone_getAutocomplete_v2_Response_mPayload();
    Timezone_getAutocomplete_v2_Response_mPayload(QString json);
    ~Timezone_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Timezone_AutocompleteElement_Response> getAObjTimezone() const;
    void setAObjTimezone(const QList<Timezone_AutocompleteElement_Response> &a_obj_timezone);
    bool is_a_obj_timezone_Set() const;
    bool is_a_obj_timezone_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Timezone_AutocompleteElement_Response> m_a_obj_timezone;
    bool m_a_obj_timezone_isSet;
    bool m_a_obj_timezone_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Timezone_getAutocomplete_v2_Response_mPayload)

#endif // Timezone_getAutocomplete_v2_Response_mPayload_H