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

#include "OAIBranding_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_ResponseCompound_allOf::OAIBranding_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_ResponseCompound_allOf::OAIBranding_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIBranding_ResponseCompound_allOf::~OAIBranding_ResponseCompound_allOf() {}

void OAIBranding_ResponseCompound_allOf::initializeModel() {

    m_s_branding_logourl_isSet = false;
    m_s_branding_logourl_isValid = false;
}

void OAIBranding_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_s_branding_logourl_isValid = ::OpenAPI::fromJsonValue(s_branding_logourl, json[QString("sBrandingLogourl")]);
    m_s_branding_logourl_isSet = !json[QString("sBrandingLogourl")].isNull() && m_s_branding_logourl_isValid;
}

QString OAIBranding_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_s_branding_logourl_isSet) {
        obj.insert(QString("sBrandingLogourl"), ::OpenAPI::toJsonValue(s_branding_logourl));
    }
    return obj;
}

QString OAIBranding_ResponseCompound_allOf::getSBrandingLogourl() const {
    return s_branding_logourl;
}
void OAIBranding_ResponseCompound_allOf::setSBrandingLogourl(const QString &s_branding_logourl) {
    this->s_branding_logourl = s_branding_logourl;
    this->m_s_branding_logourl_isSet = true;
}

bool OAIBranding_ResponseCompound_allOf::is_s_branding_logourl_Set() const{
    return m_s_branding_logourl_isSet;
}

bool OAIBranding_ResponseCompound_allOf::is_s_branding_logourl_Valid() const{
    return m_s_branding_logourl_isValid;
}

bool OAIBranding_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_branding_logourl_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
