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

#include "Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request() {
    this->initializeModel();
}

Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::~Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request() {}

void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::initializeModel() {

    m_s_return_url_isSet = false;
    m_s_return_url_isValid = false;

    m_s_iframedomain_isSet = false;
    m_s_iframedomain_isValid = false;

    m_b_isiframe_isSet = false;
    m_b_isiframe_isValid = false;
}

void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::fromJsonObject(QJsonObject json) {

    m_s_return_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_return_url, json[QString("sReturnUrl")]);
    m_s_return_url_isSet = !json[QString("sReturnUrl")].isNull() && m_s_return_url_isValid;

    m_s_iframedomain_isValid = ::Ezmaxapi::fromJsonValue(m_s_iframedomain, json[QString("sIframedomain")]);
    m_s_iframedomain_isSet = !json[QString("sIframedomain")].isNull() && m_s_iframedomain_isValid;

    m_b_isiframe_isValid = ::Ezmaxapi::fromJsonValue(m_b_isiframe, json[QString("bIsiframe")]);
    m_b_isiframe_isSet = !json[QString("bIsiframe")].isNull() && m_b_isiframe_isValid;
}

QString Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_s_return_url_isSet) {
        obj.insert(QString("sReturnUrl"), ::Ezmaxapi::toJsonValue(m_s_return_url));
    }
    if (m_s_iframedomain_isSet) {
        obj.insert(QString("sIframedomain"), ::Ezmaxapi::toJsonValue(m_s_iframedomain));
    }
    if (m_b_isiframe_isSet) {
        obj.insert(QString("bIsiframe"), ::Ezmaxapi::toJsonValue(m_b_isiframe));
    }
    return obj;
}

QString Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::getSReturnUrl() const {
    return m_s_return_url;
}
void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::setSReturnUrl(const QString &s_return_url) {
    m_s_return_url = s_return_url;
    m_s_return_url_isSet = true;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_s_return_url_Set() const{
    return m_s_return_url_isSet;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_s_return_url_Valid() const{
    return m_s_return_url_isValid;
}

QString Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::getSIframedomain() const {
    return m_s_iframedomain;
}
void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::setSIframedomain(const QString &s_iframedomain) {
    m_s_iframedomain = s_iframedomain;
    m_s_iframedomain_isSet = true;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_s_iframedomain_Set() const{
    return m_s_iframedomain_isSet;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_s_iframedomain_Valid() const{
    return m_s_iframedomain_isValid;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::isBIsiframe() const {
    return m_b_isiframe;
}
void Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::setBIsiframe(const bool &b_isiframe) {
    m_b_isiframe = b_isiframe;
    m_b_isiframe_isSet = true;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_b_isiframe_Set() const{
    return m_b_isiframe_isSet;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::is_b_isiframe_Valid() const{
    return m_b_isiframe_isValid;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_return_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_iframedomain_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_isiframe_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
