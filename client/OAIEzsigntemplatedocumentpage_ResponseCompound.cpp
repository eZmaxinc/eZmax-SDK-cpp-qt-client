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

#include "OAIEzsigntemplatedocumentpage_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocumentpage_ResponseCompound::OAIEzsigntemplatedocumentpage_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocumentpage_ResponseCompound::OAIEzsigntemplatedocumentpage_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplatedocumentpage_ResponseCompound::~OAIEzsigntemplatedocumentpage_ResponseCompound() {}

void OAIEzsigntemplatedocumentpage_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatedocumentpage_id_isSet = false;
    m_pki_ezsigntemplatedocumentpage_id_isValid = false;

    m_i_ezsigntemplatedocumentpage_widthimage_isSet = false;
    m_i_ezsigntemplatedocumentpage_widthimage_isValid = false;

    m_i_ezsigntemplatedocumentpage_heightimage_isSet = false;
    m_i_ezsigntemplatedocumentpage_heightimage_isValid = false;

    m_i_ezsigntemplatedocumentpage_widthpdf_isSet = false;
    m_i_ezsigntemplatedocumentpage_widthpdf_isValid = false;

    m_i_ezsigntemplatedocumentpage_heightpdf_isSet = false;
    m_i_ezsigntemplatedocumentpage_heightpdf_isValid = false;

    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = false;
    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = false;

    m_s_computed_imageurl_isSet = false;
    m_s_computed_imageurl_isValid = false;
}

void OAIEzsigntemplatedocumentpage_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocumentpage_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocumentpage_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatedocumentpage_id, json[QString("pkiEzsigntemplatedocumentpageID")]);
    m_pki_ezsigntemplatedocumentpage_id_isSet = !json[QString("pkiEzsigntemplatedocumentpageID")].isNull() && m_pki_ezsigntemplatedocumentpage_id_isValid;

    m_i_ezsigntemplatedocumentpage_widthimage_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_widthimage, json[QString("iEzsigntemplatedocumentpageWidthimage")]);
    m_i_ezsigntemplatedocumentpage_widthimage_isSet = !json[QString("iEzsigntemplatedocumentpageWidthimage")].isNull() && m_i_ezsigntemplatedocumentpage_widthimage_isValid;

    m_i_ezsigntemplatedocumentpage_heightimage_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_heightimage, json[QString("iEzsigntemplatedocumentpageHeightimage")]);
    m_i_ezsigntemplatedocumentpage_heightimage_isSet = !json[QString("iEzsigntemplatedocumentpageHeightimage")].isNull() && m_i_ezsigntemplatedocumentpage_heightimage_isValid;

    m_i_ezsigntemplatedocumentpage_widthpdf_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_widthpdf, json[QString("iEzsigntemplatedocumentpageWidthpdf")]);
    m_i_ezsigntemplatedocumentpage_widthpdf_isSet = !json[QString("iEzsigntemplatedocumentpageWidthpdf")].isNull() && m_i_ezsigntemplatedocumentpage_widthpdf_isValid;

    m_i_ezsigntemplatedocumentpage_heightpdf_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_heightpdf, json[QString("iEzsigntemplatedocumentpageHeightpdf")]);
    m_i_ezsigntemplatedocumentpage_heightpdf_isSet = !json[QString("iEzsigntemplatedocumentpageHeightpdf")].isNull() && m_i_ezsigntemplatedocumentpage_heightpdf_isValid;

    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_pagenumber, json[QString("iEzsigntemplatedocumentpagePagenumber")]);
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = !json[QString("iEzsigntemplatedocumentpagePagenumber")].isNull() && m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    m_s_computed_imageurl_isValid = ::OpenAPI::fromJsonValue(s_computed_imageurl, json[QString("sComputedImageurl")]);
    m_s_computed_imageurl_isSet = !json[QString("sComputedImageurl")].isNull() && m_s_computed_imageurl_isValid;
}

QString OAIEzsigntemplatedocumentpage_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocumentpage_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocumentpage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentpageID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatedocumentpage_id));
    }
    if (m_i_ezsigntemplatedocumentpage_widthimage_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageWidthimage"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_widthimage));
    }
    if (m_i_ezsigntemplatedocumentpage_heightimage_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageHeightimage"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_heightimage));
    }
    if (m_i_ezsigntemplatedocumentpage_widthpdf_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageWidthpdf"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_widthpdf));
    }
    if (m_i_ezsigntemplatedocumentpage_heightpdf_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpageHeightpdf"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_heightpdf));
    }
    if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_pagenumber));
    }
    if (m_s_computed_imageurl_isSet) {
        obj.insert(QString("sComputedImageurl"), ::OpenAPI::toJsonValue(s_computed_imageurl));
    }
    return obj;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getPkiEzsigntemplatedocumentpageId() const {
    return pki_ezsigntemplatedocumentpage_id;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setPkiEzsigntemplatedocumentpageId(const qint32 &pki_ezsigntemplatedocumentpage_id) {
    this->pki_ezsigntemplatedocumentpage_id = pki_ezsigntemplatedocumentpage_id;
    this->m_pki_ezsigntemplatedocumentpage_id_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_pki_ezsigntemplatedocumentpage_id_Set() const{
    return m_pki_ezsigntemplatedocumentpage_id_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_pki_ezsigntemplatedocumentpage_id_Valid() const{
    return m_pki_ezsigntemplatedocumentpage_id_isValid;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getIEzsigntemplatedocumentpageWidthimage() const {
    return i_ezsigntemplatedocumentpage_widthimage;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setIEzsigntemplatedocumentpageWidthimage(const qint32 &i_ezsigntemplatedocumentpage_widthimage) {
    this->i_ezsigntemplatedocumentpage_widthimage = i_ezsigntemplatedocumentpage_widthimage;
    this->m_i_ezsigntemplatedocumentpage_widthimage_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_widthimage_Set() const{
    return m_i_ezsigntemplatedocumentpage_widthimage_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_widthimage_Valid() const{
    return m_i_ezsigntemplatedocumentpage_widthimage_isValid;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getIEzsigntemplatedocumentpageHeightimage() const {
    return i_ezsigntemplatedocumentpage_heightimage;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setIEzsigntemplatedocumentpageHeightimage(const qint32 &i_ezsigntemplatedocumentpage_heightimage) {
    this->i_ezsigntemplatedocumentpage_heightimage = i_ezsigntemplatedocumentpage_heightimage;
    this->m_i_ezsigntemplatedocumentpage_heightimage_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_heightimage_Set() const{
    return m_i_ezsigntemplatedocumentpage_heightimage_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_heightimage_Valid() const{
    return m_i_ezsigntemplatedocumentpage_heightimage_isValid;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getIEzsigntemplatedocumentpageWidthpdf() const {
    return i_ezsigntemplatedocumentpage_widthpdf;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setIEzsigntemplatedocumentpageWidthpdf(const qint32 &i_ezsigntemplatedocumentpage_widthpdf) {
    this->i_ezsigntemplatedocumentpage_widthpdf = i_ezsigntemplatedocumentpage_widthpdf;
    this->m_i_ezsigntemplatedocumentpage_widthpdf_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_widthpdf_Set() const{
    return m_i_ezsigntemplatedocumentpage_widthpdf_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_widthpdf_Valid() const{
    return m_i_ezsigntemplatedocumentpage_widthpdf_isValid;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getIEzsigntemplatedocumentpageHeightpdf() const {
    return i_ezsigntemplatedocumentpage_heightpdf;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setIEzsigntemplatedocumentpageHeightpdf(const qint32 &i_ezsigntemplatedocumentpage_heightpdf) {
    this->i_ezsigntemplatedocumentpage_heightpdf = i_ezsigntemplatedocumentpage_heightpdf;
    this->m_i_ezsigntemplatedocumentpage_heightpdf_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_heightpdf_Set() const{
    return m_i_ezsigntemplatedocumentpage_heightpdf_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_heightpdf_Valid() const{
    return m_i_ezsigntemplatedocumentpage_heightpdf_isValid;
}

qint32 OAIEzsigntemplatedocumentpage_ResponseCompound::getIEzsigntemplatedocumentpagePagenumber() const {
    return i_ezsigntemplatedocumentpage_pagenumber;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber) {
    this->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    this->m_i_ezsigntemplatedocumentpage_pagenumber_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Set() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid;
}

QString OAIEzsigntemplatedocumentpage_ResponseCompound::getSComputedImageurl() const {
    return s_computed_imageurl;
}
void OAIEzsigntemplatedocumentpage_ResponseCompound::setSComputedImageurl(const QString &s_computed_imageurl) {
    this->s_computed_imageurl = s_computed_imageurl;
    this->m_s_computed_imageurl_isSet = true;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_s_computed_imageurl_Set() const{
    return m_s_computed_imageurl_isSet;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::is_s_computed_imageurl_Valid() const{
    return m_s_computed_imageurl_isValid;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocumentpage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_widthimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_heightimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_widthpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_heightpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_computed_imageurl_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocumentpage_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocumentpage_id_isValid && m_i_ezsigntemplatedocumentpage_widthimage_isValid && m_i_ezsigntemplatedocumentpage_heightimage_isValid && m_i_ezsigntemplatedocumentpage_widthpdf_isValid && m_i_ezsigntemplatedocumentpage_heightpdf_isValid && m_i_ezsigntemplatedocumentpage_pagenumber_isValid && m_s_computed_imageurl_isValid && true;
}

} // namespace OpenAPI
